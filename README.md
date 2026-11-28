# Fallen medical delivery drone

We designed a radio-controlled quadcopter to pick up a lightweight mock medical kit, carry it across a demonstration area, and set it down. The pilot flies using a handheld radio and sees the view from the nose camera on a small monitor. We started this project to learn how to design a drone, from the printed frame to the electronics that operate its claw.

![Assembled drone with its camera head, battery carrier and three-finger claw](Design%20Review/Drone%20assembly.png)

## Open the design

| File | What you can see or edit |
|---|---|
| [FreeCAD assembly](Design%20Review/Drone%20assembly.FCStd) | All 67 components in position. The camera shoe and PCB rails have editable solid features. |
| [Blender assembly](Design%20Review/Drone%20assembly.blend) · [Assembly STEP archive](Design%20Review/Drone%20assembly.step.zip) | Blender source and a CAD exchange copy. Unzip the STEP before importing it. |
| [Electronics placement](Design%20Review/Electronics%20placement.png) · [Mounting notes](Design%20Review/Design%20review.md) | Internal layout, mounting hardware and fit checks. Purchased electronics are represented by approximate shapes. |
| [Bill of materials](Design%20Review/Project%20BOM.csv) | Parts, quantities, estimated costs and supplier links. |

## Three-finger claw

One servo moves a rod and sliding collar. Three links connect the collar to the rounded fingers so they open and close together. The view below isolates the claw from the full assembly.

![Current claw with three linked fingers and their common sliding collar](Design%20Review/Three-finger%20claw.png)

[Claw base](Current%20STEP%20Files/Claw%20Base.step) · [Rounded finger](Current%20STEP%20Files/Rounded%20Finger.step) · [Finger link](Current%20STEP%20Files/Finger%20Link.step) · [Sliding collar](Current%20STEP%20Files/Sliding%20Collar.step)

## Camera and board mounts

The original camera head sits on a strap adapter. A printed shoe holds the camera inside the head, with openings for the lens and cable. Two identical printed rails support the custom PCB at its four mounting holes.

[Camera head](Camera%20Head%20CAD/Camera%20Head.step) · [Camera shoe — print one](Design%20Review/Camera%20shoe.stl) · [PCB rail — print two](Design%20Review/PCB%20rail.stl)

## Claw control board

The flight controller and its four ESCs control the motors. A separate custom board carries the Pico W for the claw servo. This top view shows the front copper, silkscreen and outline from the KiCad board file.

![Top view of the custom claw PCB exported from KiCad](Design%20Review/Claw%20board.svg)

[KiCad project](PCB/Claw%20Board.kicad_pro) · [Board layout](PCB/Claw%20Board.kicad_pcb) · [Schematic PDF](PCB/Schematic.pdf) · [Gerbers](PCB/gerbers.zip)

## Project status

The mechanical assembly, electronics layout and PCB are available for design review. The repository includes a [MicroPython servo bench script](servo.cpp) and [flight-controller firmware notes](Firmware/Betaflight-README.md). The servo script accepts typed commands. Radio-switch operation, physical fit, camera visibility, claw grip and loaded flight still need verification on the built drone.
