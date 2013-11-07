rotation-counter
====================

A very simple tool for counting rotations, for use in 
[Crystal C Levitation][ccl] project where we need to wrap lots and lots of wire
to create electromagnets and they should all be the same.

[ccl]: http://github.com/oturpe/crystal-c-levitation

To use, simply connect a permanent magnet to whatever rotating tool you are
using to wrap the coils. Then connect [SE49E][se49e] linear Hall effect sensor so that
the magnet passes it in close distance (something like 5mm). Connect Arduino
to computer and fire up serial monitor. Number of rotations and thus turns in
the coil is printed.

[se49e]: http://sensing.honeywell.com/honeywell-sensing-ss39et-ss49e-ss59et-product-sheet-005850-3-en.pdf

Note that a Hall effect _switch_ would be simpler and better in every respect.
Except that there were linear sensors lying around and no switches anywhere.  

TODOs:

1. Connect a LCD display and show values there. Serial is slow and computer
total overkill as display.
2. Add some kind of calibration mode so that different conditions do not
need recompilation and testing with threshold values.
