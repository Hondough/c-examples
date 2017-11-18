#include <stdio.h>

/*
Example of syntax error:

0004-syntax.c:5:13: warning: missing terminating '"' character [-Winvalid-pp-token]
    printf ("Jamsa\'s C/C++/C# Programmer\'s Bible!);
            ^
0004-syntax.c:5:13: error: expected expression
0004-syntax.c:6:2: error: expected '}'
}
 ^
0004-syntax.c:4:1: note: to match this '{'
{
^
1 warning and 2 errors generated.
*/

int main(void)
{
    printf ("Jamsa\'s C/C++/C# Programmer\'s Bible!);
}