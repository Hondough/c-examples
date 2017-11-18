/*
Compiler issues warning but still compiles and executes:
0018-no_stdio.c:3:5: warning: implicitly declaring library function 'printf' with type 'int (const char *, ...)'
      [-Wimplicit-function-declaration]
    printf("Jamasa\'s C/C++/C# Programmer\'s Bible!");
    ^
0018-no_stdio.c:3:5: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
1 warning generated.
*/
int main(void)
{
    printf("Jamasa\'s C/C++/C# Programmer\'s Bible!");
}