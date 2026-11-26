# Drone design review — November 26, 2026

The 12 mm assembly is a design candidate for four XING 2005 2550KV motors. Open the Blender assembly or unzip the STEP for CAD. Use the matching frame STL. The earlier 9 mm frame belongs to the smaller motor option. The camera head and strap adapter are included. The STEP uses faceted bodies; the existing top cover is a surface model.

## Mechanical fit
The frame generator checked a single connected manifold mesh. Motor centers remain at X ±91 and Y ±90 mm. Each pad is now 28 mm wide and 5 mm thick with four 2.2 mm clearance holes on 12 mm centers. The current center opening is 4.8 mm. Check the actual motor retaining clip and screw penetration before printing. A 127 mm prop disk leaves 53 mm between the nearest adjacent disks in plan. Body, wires, motor height, and blade flex need a separate check. The assembly contains 36 modeled objects including a battery envelope; remaining electronics, props, medkit, and harnesses are not a fully populated fit model. The claw pose is illustrative. Verify jaw travel, servo horn and rod, grip, release, camera retention, PCB standoffs, battery restraint and loaded center of gravity.

## Power and controls
Selected Tattu FunFly 1300 mAh 4S 100C pack (130 A nameplate) and XT60 male airframe lead. The XT30 charge adapter is removed. The 78 x 37 x 30.5 mm maximum published battery envelope clears modeled parts on a separate two-strap carrier. Four carrier feet match the existing cover bolt pattern. Allow for plug exits, thicker pack variants, strap thickness and added screw length. Check actual loaded current, battery sag and connector temperature. The higher rating comes with about 70 g additional battery mass over the old pack. Lift still needs a weighed comparison.
Use the 4S 2550KV motor variant and verify the matching 5030 prop hardware. The older 4-inch props are not approved by this review. The 5V UBEC feeds the claw servo; check regulator voltage, servo stall draw and J7 polarity. Verify ELRS bind, switch, receiver failsafe, free 3.3V UART and Pico response with propellers removed. User is supplying claw firmware. The local repository snapshot's servo.cpp uses other pins and lacks a semicolon; it does not establish working firmware. Verify the actual release source.
The previous KiCad report for Claw Board found zero design-rule violations and zero unconnected pads. Its eleven parity warnings cover the custom Pico footprint filter, six test-pad BOM flags, and four mechanical mounting holes. Verify purchased footprints, board clearance, and connector orientation before releasing Gerbers.

## Procurement
Sunday December 6 is the deadline. No order, carrier commitment, PCB fabrication quote or pickup reservation has been confirmed. Stock labels can change. Vendor shipping policies: https://shop.iflight.com/help-center-shipping.html and https://pyrodrone.com/pages/shipping-policy . Select the exact motor variant and quantity of four. Battery ground transit and fabricated PCBs need separate dated commitments. The BOM prices are estimates; blank prices require quotes. PCB distributor search links are sourcing aids. Confirm owned hardware and lengths before ordering. Design review only; printed arm strength, physical fit, loaded flight and the live video system are untested.



