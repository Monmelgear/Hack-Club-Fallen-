
from machine import Pin, PWM

SIGNAL_PIN = 16
ENABLE_PIN = 17

START_US = 1500
STEP_US = 10
MIN_US = 1300
MAX_US = 1700


def run():
    enable = Pin(ENABLE_PIN, Pin.OUT, value=0)

    if not (0 < MIN_US <= START_US <= MAX_US < 20000 and STEP_US > 0):
        raise ValueError("Check pulse limits, start pulse and step size")

    pwm = PWM(Pin(SIGNAL_PIN))
    pulse = None

    try:
        pwm.freq(50)
        pwm.duty_u16(0)
        print("Servo signal OFF.")
        print("Commands: start, +, -, status, off, quit")

        while True:
            command = input("servo> ").strip().lower()

            if command == "start":
                if pulse is None:
                    pulse = START_US
                pwm.duty_ns(pulse * 1000)
                enable.value(1)
                print("Signal ON:", pulse, "us")

            elif command in ("+", "-"):
                if pulse is None:
                    print("Type start first.")
                    continue

                step = STEP_US if command == "+" else -STEP_US
                candidate = pulse + step

                if not MIN_US <= candidate <= MAX_US:
                    print("Limit reached. Pulse stays at", pulse, "us")
                    continue

                pwm.duty_ns(candidate * 1000)
                pulse = candidate
                print("Commanded pulse:", pulse, "us")

            elif command == "status":
                if pulse is None:
                    print("Signal OFF")
                else:
                    print("Commanded pulse:", pulse, "us")

            elif command == "off":
                enable.value(0)
                pwm.duty_u16(0)
                pulse = None
                print("Servo signal OFF")

            elif command == "quit":
                break

            else:
                print("Use start, +, -, status, off, or quit.")

    finally:
        enable.value(0)
        pwm.duty_u16(0)
        pwm.deinit()
        print("Servo signal OFF")


if __name__ == "__main__":
    run()
