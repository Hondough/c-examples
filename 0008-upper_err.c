#include <stdio.h>
/*
Example of upper case not being equal to lower case:
0008-upper_err.c:6:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.
Undefined symbols for architecture x86_64:
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/
int Main(void)
{
    printf("This program does not compile!");
}