/******************
Name: Aviv Sayer
ID: 326552304
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
    int n, pos;

    // What bit
    printf("What bit:\n");
    /*Scan two integers (representing number and a position)
    Print the bit in this position. */
    scanf("%d %d", &n, &pos);
    printf("%d", n >> pos & 1);

    // Set bit
    printf("\nSet bit:\n");
    /*Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output
    Now make sure it's "off" (equal to 0)
    Print the output */
    scanf("%d %d", &n, &pos);
    printf("%d\n%d", n | 1 << pos, n & ~(1 << pos));

    // Toggle bit
    printf("\nToggle bit:\n");
    /*Scan two integers (representing number and a position)
    Toggle the bit in this position
    Print the new number */
    scanf("%d %d", &n, &pos);
    printf("%d", n ^ 1 << pos);

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */
    scanf("%d", &n);
    printf("%d", !(n & 1));

#define n1 n
#define n2 pos
    // 3, 5, 7, 11
    printf("\n3, 5, 7, 11:\n");
    /* Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result. */
    scanf("%d %d", &n1, &n2);
    printf("%.4X\n%d%d%d%d",
            n1 + n2,
           (n1 + n2) >> 3 & 1,
           (n1 + n2) >> 5 & 1,
           (n1 + n2) >> 7 & 1,
           (n1 + n2) >> 11 & 1);

    printf("\nBye!\n");

    return 0;
}
