/**
 * @file Ex_4.c
 * @author Ziad Mohammed Fathi
 * @brief check whether any digits in a number appears more than once.
 * @version 0.1
 * @date 2024-03-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/* ========== Section : Includes ========== */
#include<stdio.h>  
#include<stdlib.h>  

/* ========== Section : Functions Declarations ========== */
void Check(unsigned int Num);

/* ========== Section : Declarations ========== */
unsigned int Arr[] = {0}; 

/* ========== Section : Main Function ========== */
int main(void)  
{   
    unsigned int Num = 0;

    printf("* Enter the number : ");  
    scanf("%d", &Num);  
    
    Check(Num);
    return 0;  
}  

/* ========== Section : Functions Definations ========== */
/**
 * @brief check whether any digits in a number appears more than once.
 * 
 * @param Num 
 */
void Check(unsigned int Num)
{
    unsigned int check = 0;

    while (Num)
    {
        check = Num % 10;

        if (Arr[check] == 1)
            break;
        else
            Arr[check] = 1;

        Num = Num / 10;
    }

    if (Num)
    {
        printf("=> Yes\n=> And Number Is [%d]\n",Num);
    }
    else
    {
        printf("=> No\n");
    }
}