teensyduino-1.18-CB
===================

Code::Blocks (10.05) project template for teensyduino 1.18 projects on the Teensy 3.x

This project template includes all teensyduino 1.18 files, plus some enhancements, in a Code::Blocks project. It was created with Code::Blocks 10.05.

1) Configuring C::B for this project
------------------------------------

1.1) Compiler
-------------
The compiler used by this project must be known to C::B, or your ARM compiler must be known by this project. By default, neither of these criteria will be met in your personal development environment. You can do either:

  1) Make the compiler you want to use known to C::B. The compiler used by the project is named "gnu arm-none-eabi". To configure such a compiler in C::B, go to "Settings->Compiler and Debugger->Global Compiler Settings" menu, create a new compiler  and fill in the details. It's usually sufficient to set the base path and then auto-detect the binaries.

  2) If you already have a correctly configured compiler, select it in the project settings (Build options...->Selected Compiler).

2) Available Targets
--------------------
The available targets are:
  - Teensy3.0 builds in release mode for the Teensy 3.0.
  - Teensy3.1 builds in release mode for the Teensy 3.1.
They only differ in the linker script used.

Enhancements
------------
- Includes static initialization fix from post #9 in this forum thread: http://forum.pjrc.com/threads/25385-static-local-variables-aren-t-static

Planned Enhancements
--------------------
- Include an extended linker script that provides access to the MK20DX128 and MK20DX256 peripherals by providing a symbol that points to their base address
