rotation-counter
====================

A very simple tool for counting rotations, for use in 
[Crystal C Levitation][ccl] project where we need to wrap lots and lots of wire
to create electromagnets.

[ccl]: http://github.com/oturpe/crystal-c-levitation

To use, simply connect a permanent magnet to whatever rotating tool you are
using to wrap the coils. Then connect SE49E linear Hall effect sensor so that
the magnet passes it in close distance (_TODO: how many cm max?_). Connect Arduino
to computer and fire up serial monitor. Number to turns is printed.

_TODO: To make this a real project, connect a LCD display and show values there.
Then this is a real rotation count add-on for any drill etc._ 