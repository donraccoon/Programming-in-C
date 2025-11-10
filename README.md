# 💻 C Programming Course Projects

This repository hosts all the projects and assignments completed as part of my C Programming course. This includes everything from foundational data types and control structures to more advanced topics like pointers, memory management, and file I/O.

## 🛠 Compilation Guide

All C source files in this repository are intended to be compiled using the **GNU Compiler Collection (GCC)**.

### Standard Compilation Command

To compile a single source file (e.g., `program.c`) into an executable named `my_program`, use the following command in your terminal:

gcc program.c -o my_program


**Explanation of Flags:**

* **`program.c`**: The name of your source file.

* **`-o`**: This flag tells the compiler to specify the name of the output file.

* **`my_program`**: The desired name for the compiled executable file.

### Running the Program

After successful compilation, you can run the executable from your terminal using:

./my_program


### Adding Warnings and Debugging Symbols (Recommended)

For better practice, always include warning flags and debugging symbols during development. This helps catch potential issues early.

gcc -Wall -Wextra -g program.c -o my_program


* **`-Wall` / `-Wextra`**: Enable all (and extra) common compiler warnings.

* **`-g`**: Include debugging information, useful if you need to use a debugger like GDB.

## 🚀 Get Started

Clone the repository and jump into any project directory to review or run the code!
