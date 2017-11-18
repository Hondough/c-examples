#include <stdio.h>
/*
using an undefined statement, "print":
0012-no_print.c:5:5: warning: implicit declaration of function 'print' is invalid in C99
      [-Wimplicit-function-declaration]
    print("This program does not link");
    ^
1 warning generated.
Undefined symbols for architecture x86_64:
  "_print", referenced from:
      _main in 0012-no_print-dc07b9.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/
int main(void)
{
    print("This program does not link");
}