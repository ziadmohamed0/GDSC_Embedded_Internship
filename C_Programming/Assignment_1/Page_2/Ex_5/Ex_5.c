/**
 * @file Ex_5.c
 * @author Ziad Mohammed Fathi
 * @brief find Factorial of a Number.
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
#include <stdlib.h>

signed int Fac(signed int N);

signed int number;

int main(void)
{
    
    printf("Enter a number : ");
    scanf("%d", &number);

    signed int Ret = Fac(number);

    if (Ret == 0)
    {
        printf("Error!! Factorial of Negative Number doesn't exist.\n");
    }
    else
    {
        printf("=> Factorial of [%d] is: %d\n", number, Ret);
    }
    
    return 0;
}

signed int Fac(signed int N)
{
    unsigned int fact = 1;
    unsigned int Counter;
    if (number >= 0)
    {
        for (Counter = 1; Counter <= number; Counter++)
        {
            fact = fact * Counter;
        }
    }
    else
    {
        fact = 0;
    }
    return fact;
}