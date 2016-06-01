rotation-counter
====================

A very simple tool for counting rotations, for use in
[Crystal C Levitation][ccl] project where we need to wrap lots and lots of wire
to create electromagnets and they should all be the same.

[ccl]: http://github.com/oturpe/crystal-c-levitation

Usage:

1. Connect a permanent magnet to whatever rotating tool you are using to wrap the coils.
2. Connect a Hall effect sensor that the magnet passes it in close distance. Something like 5 mm should work, but this depends on magnet and sensor. Polarity is also important, magnet poles and sensor front have to be positioned correctly.
3. Configure the reader for the used input pin and sensor type by modifying function RotationCounter::initializeSensor().
4. Compile and upload the program to Arduino.
4. Connect Arduino to computer and fire up serial monitor. Number of rotations and thus turns in the coil is printed.

This counter has been successfully used with [se49e][se49e] linear Hall effect
sensor and [us1881kua][us1881kua] Hall latch. Using a latch is recommended as the linear reading only complicate matters.

[se49e]: http://sensing.honeywell.com/honeywell-sensing-ss39et-ss49e-ss59et-product-sheet-005850-3-en.pdf
[us1881kua]: http://www.melexis.com/Asset/US1881-DataSheet-DownloadLink-4816.aspx

TODOs:

1. Connect a LCD display and show values there so that a computer is not needed to read values.
2. Add some kind of calibration mode so that different conditions do not
need recompilation and testing with threshold values.
