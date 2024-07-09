/**
 * @file Ex_3.c
 * @author Ziad Mohammed Fathi
 * @brief  check whether a number is Even or Odd.
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h> 
#include <stdlib.h>

void Fun(unsigned int Num);

unsigned int Number = 0;

int main (void)
{
    printf("Enter the number to check : ");
    scanf("%d",&Number);

    Fun(Number);

    return 0;
}

/**
 * @brief check number is Even or Odd.
 *
 * @param Num
 */
void Fun(unsigned int Num)
{
    if (Num%2)
    {
        printf("=> [%d] is Odd Number\n",Num);
    }
    else
    {
        printf("=> [%d] is Even Number\n", Num);
    }
}