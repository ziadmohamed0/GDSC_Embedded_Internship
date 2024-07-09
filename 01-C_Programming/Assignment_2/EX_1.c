/**
 * @file EX_1.c
 * @author Ziad Mohammed Fathi
 * @brief  A Simple Calculator
 * @version 0.1
 * @date 2024-02-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/* ----------- Section : Includes ----------- */
#include <stdio.h>
#include <stdlib.h>

/* ----------- Section : Declarations ----------- */
float calc(float Num1, float Num2);

float Num1 = 0;
float Num2 = 0;
unsigned char Op = 0;

/* ----------- Section : Main ----------- */
int main (void)
{

    printf("\t\t===== Hello Calc ===== \n\n");
    printf("=> Enter Number 1 : ");
    scanf("%f",&Num1);

    printf("=> Enter Number 2 : ");
    scanf("%f",&Num2);

    printf("=> Enter Operation : ");
    scanf(" %c",&Op);

    printf("\n==========================\n");
    float Res = calc(Num1,Num2);
    printf("=> Resulte = %.2f",Res);
    printf("\n==========================\n");

    return 0;
}

/* ----------- Section : Defintions ----------- */

/**
 * @brief A Simple Calculator to Add & Subtract & Multiply and Divide
 * 
 * @param Num1 
 * @param Num2 
 * @return float 
 */
float calc(float Num1, float Num2)
{
    float Ret = 1;

    switch (Op)
    {
    case '+':
        Ret = (Num1 + Num2);
        break;
    
    case '-':
        Ret = (Num1 - Num2);
        break;


    case '*':
        Ret = (Num1 * Num2);
        break;

    case '/':
        if (Num2 == 0)
        {
            Ret = 0;    //Error
        }
        else
        {
            Ret = (Num1 / Num2);
        }
        break;

    default: 
        break;
    }
    return Ret;
}
