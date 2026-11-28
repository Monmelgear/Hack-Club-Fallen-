# Drone design review — November 27, 2026

The 12 mm assembly is a design candidate for four XING 2005 2550KV motors. Open the Blender assembly or unzip the STEP for CAD. Use the matching frame STL. The earlier 9 mm frame belongs to the smaller motor option. The camera head and strap adapter are included. The STEP uses faceted bodies; the existing top cover is a surface model.

## Assembly source and mounts

[FreeCAD source](Drone%20assembly.FCStd) · [Blender source](Drone%20assembly.blend) · [STEP archive](Drone%20assembly.step.zip). The earlier 12 mm assembly files document the previous layout. The FreeCAD source contains individually movable components and editable solid features for the three new mount instances.

- Print one [camera shoe](Camera%20shoe.stl). Seat the camera with the lens facing forward and route the lead through the rear opening. Place a trimmed pad of double-sided tape between the shoe and the head floor. The camera rests on the shoe floor. Check that the camera can pass through the entry, the head retains it, the cable is clear and the nose stays out of the live image before bonding. Keep the original head straps.
- Print two [PCB rails](PCB%20rail.stl). Rotate one rail 180 degrees. Align the 3.4 mm holes with the body stack and the 2.3 mm holes with the PCB. Use the four insulating spacers shown, nominally 3 mm tall. Check screw engagement, support at the body fasteners, solder-joint clearance and connector access before tightening.
- [Camera shoe STEP](Camera%20shoe.step) · [PCB rail STEP](PCB%20rail.step). The printed parts use owned filament. The tape adds $0.75 to the estimated BOM.

## Mechanical fit
The frame generator checked a single connected manifold mesh. Motor centers remain at X ±91 and Y ±90 mm. Each pad is now 28 mm wide and 5 mm thick with four 2.2 mm clearance holes on 12 mm centers. The current center opening is 4.8 mm. Check the actual motor retaining clip and screw penetration before printing. A 127 mm prop disk leaves 53 mm between the nearest adjacent disks in plan. Body, wires, motor height, and blade flex need a separate check. The populated assembly contains 67 components including a battery envelope, electronics, representative propeller blades and the four PCB spacers. Purchased components use approximate outlines. The demo medkit and wiring harnesses are outside this layout. The claw pose is illustrative. Verify jaw travel, servo horn and rod, grip, release, camera retention, PCB standoffs, battery restraint and loaded center of gravity.

## Power and controls
Selected Tattu FunFly 1300 mAh 4S 100C pack (130 A nameplate) and XT60 male airframe lead. The XT30 charge adapter is removed. The 78 x 37 x 30.5 mm maximum published battery envelope clears modeled parts on a separate two-strap carrier. Four carrier feet match the existing cover bolt pattern. Allow for plug exits, thicker pack variants, strap thickness and added screw length. Check actual loaded current, battery sag and connector temperature. The higher rating comes with about 70 g additional battery mass over the old pack. Lift still needs a weighed comparison.
Use the 4S 2550KV motor variant and verify the matching 5030 prop hardware. The older 4-inch props are not approved by this review. The 5V UBEC feeds the claw servo; check regulator voltage, servo stall draw and J7 polarity. Verify ELRS bind, switch, receiver failsafe, free 3.3V UART and Pico response with propellers removed. User is supplying claw firmware. The local repository snapshot's servo.cpp uses other pins and lacks a semicolon; it does not establish working firmware. Verify the actual release source.
The previous KiCad report for Claw Board found zero design-rule violations and zero unconnected pads. Its eleven parity warnings cover the custom Pico footprint filter, six test-pad BOM flags, and four mechanical mounting holes. Verify purchased footprints, board clearance, and connector orientation before releasing Gerbers.

## Procurement
Sunday December 6 is the deadline. No order, carrier commitment, PCB fabrication quote or pickup reservation has been confirmed. Stock labels can change. Vendor shipping policies: https://shop.iflight.com/help-center-shipping.html and https://pyrodrone.com/pages/shipping-policy . Select the exact motor variant and quantity of four. Battery ground transit and fabricated PCBs need separate dated commitments. The BOM prices are estimates; blank prices require quotes. PCB distributor search links are sourcing aids. Confirm owned hardware and lengths before ordering. Design review only; printed arm strength, physical fit, loaded flight and the live video system are untested.



