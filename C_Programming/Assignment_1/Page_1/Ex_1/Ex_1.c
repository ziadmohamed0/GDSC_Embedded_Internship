/**
 * @file Ex_1.c
 * @author Ziad Mohammed Fathi
 * @brief   Find ASCII value of characters. 
 * @version 0.1
 * @date 2024-02-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>

unsigned char Ch = 0;

int main (void)
{
    printf("\nEnter a character : ");
    scanf("%c",&Ch);
    printf("\n=> ASCII Value of [%c] = %d\n\n",Ch,Ch);
    return 0;    
}