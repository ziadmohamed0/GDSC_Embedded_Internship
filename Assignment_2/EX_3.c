/**
 * @file EX_3.c
 * @author Ziad Mohammed Fathi
 * @brief Sum the numbers between 1 and n number.
 * @version 0.1
 * @date 2024-02-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/* ---------- Section : Includes ---------- */
#include <stdio.h>
#include <stdlib.h> 

/* ---------- Section : Declarations ---------- */
unsigned int Num = 0;
unsigned int Fun(unsigned int N);

/* ---------- Section : Main ---------- */
int main(void)
{
    printf("Enter Number : ");
    scanf(" %d",&Num);

    unsigned int Ret = Fun(Num);
    printf("\n=> Sum of numbers from 1 to %d = [%d]\n\n",Num,Ret);
    return 0;
}

/* ---------- Section : Definations ---------- */
/**
 * @brief Sum the numbers between 1 and n number.
 * 
 * @param N 
 * @return unsigned int 
 */
unsigned int Fun(unsigned int N)
{
    unsigned int Counter = 0;
    unsigned int Sum = 0;

    for (Counter = 0 ; Counter <= N ; Counter++)
    {
        Sum += Counter;
    }
    return Sum;
}