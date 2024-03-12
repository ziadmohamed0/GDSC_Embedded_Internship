/**
 * @file EX_4.c
 * @author Ziad Mohammed Fathi
 * @brief Math_Bit
 * @version 0.1
 * @date 2024-02-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int R1 = 0b00000000;    // 0
int R2 = 0b11111111;    // 255
int R3 = 0b01010101;    // 85

int main(void)
{
    int Set_Bit     = (R1 |=  (1 << 5));    // 0b0010 0000 = 32
    int Clear_Bit   = (R2 &= ~(1 << 6));    // 0b1011 1111 = 191
    int Toggle_Bit  = (R3 ^=  (1 << 7));    // 0b1101 0101 = 213

    printf("%d \n",R1);
    printf("%d \n",R2);
    printf("%d \n\n",R3);

    return 0;
}
