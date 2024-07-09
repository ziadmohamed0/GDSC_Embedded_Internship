/**
 * @file Ex_2.c
 * @author Ziad Mohamed Fathi
 * @brief C Function to insert an Element in an Array. 
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
void Fun(unsigned int index,unsigned int Arr[index]);


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
    Fun(index , Arr);
    return 0;
}



/* ========== Section : Definations ========== */
/**
 * @brief  Function to insert an Element in an Array.
 * 
 * @param index 
 * @param Arr 
 */
void Fun(unsigned int index,unsigned int Arr[index])
{
    printf("********** Function to insert an Element in an Array **********\n\n");

    unsigned int Num = 0;
    printf("* Enter the element to be inserted in the array : ");
    scanf(" %d",&Num);
// -----------------------------------------------------------------------
    unsigned int Posetion = 0;

    while (1)
    {
        printf("* Enter the index of the number : ");
        scanf(" %d", &Posetion);
        if (Posetion > index)
        {
            printf("\nThis Number invaled!!!\n\n");
        }
        else
        {
            break;
        }
    }
// -----------------------------------------------------------------------
    Arr[Posetion] = Num;
    printf("==================================================\n");
    for (int  Counter = 0; Counter < index; Counter++)
    {
        printf("=> Elements [%d] : %d\n",(Counter+1),Arr[Counter]);
    }
    printf("==================================================\n");
}