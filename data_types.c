#include <stdio.h>

int main()
{
// 3 Main data types

    int age = 40; // integer
    double gpa = 3.86; 
    /* different from float. 
    double has 2x more precision than float. 
    float is a 32-bit IEEE 754 single precision Floating Point Number – 
    1 bit for the sign, 8 bits for the exponent, and 23* for the value. 
    float has 7 decimal digits of precision. 
    double is a 64-bit IEEE 754 double precision Floating Point Number – 
    1 bit for the sign, 11 bits for the exponent, and 52* bits for the value. 
    double has 15 decimal digits of precision. */
    
    char grade = 'A'; // can only store one character. Single quotes

    char phrase[] = "C is not fun"; // a string is basically an array. Double Quotes


    // Additional data type - constant
    // Something that cannot be changed --> String, constant integers
    const int num = 40;
    
    return 0;
}