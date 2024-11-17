/******************
Name: Aviv Sayer
ID: 326552304
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER :YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
    int n, pos;

    // What bit
    printf("What bit:\n");
    /*Scan two integers (representing number and a position)
    Print the bit in this position. */
    printf("Please enter a number:\n");
    scanf("%d", &n);
    printf("Please enter a position:\n");
    scanf("%d", &pos);
    printf("The bit in position %d of number %d is: %d", pos, n, n >> pos & 1);

    // Set bit
    printf("\nSet bit:\n");
    /*Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output
    Now make sure it's "off" (equal to 0)
    Print the output */
    printf("Please enter a number:\n");
    scanf("%d", &n);
    printf("Please enter a position:\n");
    scanf("%d", &pos);
    printf("Number with bit %d set to 1: %d\nNumber with bit %d set to 0: %d", pos, n | 1 << pos, pos, n & ~(1 << pos));

    // Toggle bit
    printf("\nToggle bit:\n");
    /*Scan two integers (representing number and a position)
    Toggle the bit in this position
    Print the new number */
    printf("Please enter a number:\n");
    scanf("%d", &n);
    printf("Please enter a position:\n");
    scanf("%d", &pos);
    printf("Number with bit %d toggled: %d", pos, n ^ 1 << pos);

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */
    printf("Please enter a number:\n");
    scanf("%d", &n);
    printf("%d", ~n & 1);

#define n1 n
#define n2 pos
    // 3, 5, 7, 11
    printf("\n3, 5, 7, 11:\n");
    /* Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions:3,5,7,11 in the result. */
    printf("Please enter the first number (octal):\n");
    scanf("%o", &n1);
    printf("Please enter the second number (octal):\n");
    scanf("%o", &n2);
    printf("The sum in hexadecimal: %X\nThe 3,5,7,11 bits are: %d%d%d%d",
            n1 + n2,
           (n1 + n2) >> 3 & 1,
           (n1 + n2) >> 5 & 1,
           (n1 + n2) >> 7 & 1,
           (n1 + n2) >> 11 & 1);

    printf("\nBye!\n");

    return 0;
}
