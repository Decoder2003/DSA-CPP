#include <iostream>  // #include : preprocessor directive -> tell compiler to include specific library before compiling the code
using namespace std; // tells the compiler to use standard namespace by default

// std : The "std" namespace separates these names from others that are in the global namespace.

int main()
{ // entry point of the program

    return 0;
}

// to compile - g++ file_name.cpp -o output.exe

/* Your .exe file is Windows-specific. To make it run on other OS:
  1. Recompile the source code on the target OS.
  2. Or use compatibility tools like Wine.
*/

/* #==================================================================================
(windows specific means) -> The .exe file is also tied to the architecture of your machine (e.g., 32-bit or 64-bit).
A 64-bit .exe won’t run on a 32-bit system, even if it's Windows.
*/