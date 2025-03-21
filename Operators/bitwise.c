#include<stdio.h>
#include<stdint.h>

/**
 * type: uint8_t
 * 
 * A = 12 ----> 0000 1100
 * B = 5  ----> 0000 0101
 * 
 * A & B  ----> 0000 0100 = 4
 * A | B  ----> 0000 1101 = 13
 * A ^ B  ----> 0000 1001 = 9
 * A << B ----> 0001 1000 = 24
 * A >> B ----> 0000 0110 = 6
 */

int main()
{
    uint8_t a = 12;
    uint8_t b = 5;

    printf("A = %u\n, a");
    printf("B = %u\n\n", b);

    printf("A & B =%u\n", a & b);
    printf("A | B =%u\n", a | b);
    printf("A ^ B =%u\n", a ^ b);

    printf("A << 1 = %u\n", a << 1U);
    printf("A >> 1 =%u\n", a >> 1U);


    return 0;
}
