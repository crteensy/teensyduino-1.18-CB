teensyduino-1.18-CB
===================

Code::Blocks (10.05) project template for teensyduino 1.18 projects

This project template includes all teensyduino 1.18 files, plus some enhancements, in a Code::Blocks project. It was created with Code::Blocks 10.05.

Before you use it: make sure your Code::Blocks compiler list contains an entry named "gnu arm-none-eabi". The project template is configured to use a compiler named like that. If you already have a suitable ARM compiler configured with a different name, you have two options:

1) change the template to use your compiler

2) create a copy of your existing compiler in C::B and rename it to "gnu arm-none-eabi". To do that, go to Settings->Compiler and Debugger->Global Compiler Settings, select your compiler, make a copy, and rename it to "gnu arm-none-eabi".

Enhancements:
- Includes static initialization fix from post #9 in this forum thread: http://forum.pjrc.com/threads/25385-static-local-variables-aren-t-static
- Includes an extended linker script that provides access to the MK20DX128 peripherals by providing a symbol that points to their base addresses
