/**
 * @file Ex_3.c
 * @author your name (you@domain.com)
 * @brief  program to search a bout number in an Array.
 * @version 0.1
 * @date 2024-03-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/* ========== Section : Includes ========== */
#include <stdio.h>
#include <stdlib.h>


/* ========== Section : Declarations ========== */
unsigned int Fun(unsigned int index,unsigned int Arr[index]);


/* ========== Section : Main Function ========== */
int main (void)
{
    unsigned int index;
// -----------------------------------------------------------------------

    printf("* Enter the number of elements of this array : ");
    scanf(" %d",&index);

    unsigned int Arr[index];
// -----------------------------------------------------------------------

    printf("==================================================\n");
    for (int  Counter = 0; Counter < index; Counter++)
    {
        printf("* Enter the Element [%d] : ",(Counter+1));
        scanf(" %d",&Arr[Counter]);
    }

// -----------------------------------------------------------------------

    printf("==================================================\n");
    for (int  Counter = 0; Counter < index; Counter++)
    {
        printf("=> Elements [%d] : %d\n",(Counter+1),Arr[Counter]);
    }
    printf("==================================================\n");

// -----------------------------------------------------------------------

    unsigned int Ret = Fun(index, Arr);

    if (Ret == -1)
    {
        printf("=> This number does not exist, try again.\n");
    }
    else
    {
        printf("\n=> The number was found at index : %d\n\n", Ret);
    }
    printf("==================================================\n");
    return 0;
}

/**
 * @brief  program to search a bout number in an Array.
 * 
 * @param index 
 * @param Arr 
 * @return unsigned int 
 */
unsigned int Fun(unsigned int index, unsigned int Arr[index])
{
    unsigned int Num = 0;
    unsigned int Mask = -1;

    printf("* Enter Number : ");
    scanf("%d", &Num);

    for (int i = 0; i < index; i++)
    {
        if (Num == Arr[i])
        {
            Mask = i;
            break;
        }
    }
    return Mask;
}