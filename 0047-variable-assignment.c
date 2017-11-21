#include <stdio.h>

int main(void)
{
    int age;                   // int 16 bit -32,768 to 32,767 - 2 bytes 1 sign bit, 15 data bits
    int weight;
    int height;

    int age1, weight1, height1; // multiple variables of the same type

    // assigning values at declaration
    int age2 = 41;
    int weight2 = 165;
    int height2 = 73;

    // initialize multiple variables during declaration
    int age3 = 44, weight3, height3 = 72;

    // understanding variables of type char
    char letter = 65;           // char 8 bit -128 to 127
    char letter1 = 'A';

    // understanding variables of type float
    float radius = 34.56;       // float 32 bit 3.4E-38 to 3.4E+38 - 4 bytes 1 sign bit, 8 bit exponent, 23 bit mantissa
    float radius1 = 3.456E1;

    // understanding variables of type double
    double doubleVal = 3.15;    // double 64 bit 1.7E-308 to 1.7E+308 - 8 bytes, 1 sign bit, 11 bit exponent, 52 bit mantissa

    // understanding type modifiers
    unsigned int inventory_count;    // 0 to 65,535
    register int counter;            // prefers to keep value in register
    long int very_large_number;      // long 32 bit -2,147,483,648 to 2,147,483,647 - 4 bytes, 1 sign bit, 31 data bits
    unsigned long int national_debt; // long 32 bit 0 to 4,292,967,265

    unsigned char menu_border;       // extended ASCII character

    long int one_million = 1000000L; // long has trailing L

    short int force_16_bit_int;      // short 16 bit -32,768 to 32,767 - 2 bytes 1 sign bit, 15 data bits

    // int can be omitted
    unsigned status_flags;
    short small_value;
    long very_big_number;

    signed char byte_value;         // signed - force first bit to be sign bit

    // multiple assignment operators
    age = 0;
    height = 0;
    weight = 0;

    age = height = weight = 0;    // C assigns values right to left
}