/**
 * @file Ex_5.c
 * @author Ziad Mohammed Fathi
 * @brief get the number of elements of this array
 * @version 0.1
 * @date 2024-03-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */



/* ========== Section : Includes ========== */
#include <stdio.h>
#include <stdlib.h>


/* ========== Section : Declarations ========== */
unsigned int Arr[] = {1,2,3,4,5,6,7,8,9,10,12,11};



/* ========== Section : Main Function ========== */
int main (void)
{
    unsigned int Num = 0;
    Num = sizeof(Arr) / sizeof(Arr[0]);

    printf("=> Number of Elements : [%d]\n",Num);
    return 0;
}

