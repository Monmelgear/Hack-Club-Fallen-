
Servo myservo;

const int ServoPin = 10;
const int Open_Button = 12;
const int Open_Close_Button = 13;
//Change the servo pin to the pin we gonna use

// Do research for the preset sizes of the open and close positions of the servo thing
const int open_position = 180;
const int close_position = 0;
const int nutral = 90
// These are the sizes that im going to guess

void setup() {
    myservo.attach(ServoPin, 544, 2400);

    pinMode(Open_Button, INPUT_PULLUP);
    pinMode(Open_Close_Button, INPUT_PULLUP);
}
// im guessing that the open button is connected to the pin 12 and the open close button is connected to the pin 13
void loop() {
    if (digitalRead(Open_Button) == LOW) {
        myservo.write(open_position);
    }
    delay(100);
}

    if (digitalRead(Open_Close_Button) == LOW) {
        myservo.write(close_position);
    }
    delay(100);



// wireing the buttons to the arduio
