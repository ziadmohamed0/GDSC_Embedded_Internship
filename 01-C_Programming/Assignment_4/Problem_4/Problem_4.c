/**
 * @file Problem_4.c
 * @author Ziad Moahmmed Fathi
 * @brief Swap elements using call by reference . 
 * @version 0.1
 * @date 2024-04-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/* ---------- Section : Includes ---------- */
#include <stdlib.h>
#include <stdio.h>
/* ---------- Section : Functions Prototype ---------- */
void swap(int *Num1, int *Num2, int *Num3); 
/* ---------- Section : Main Function ---------- */
int main() {
    int x, y, z;
    printf("\n=====================================\n");

    printf("Input the value of 1st element : ");
    scanf("%d", &x);

    printf("Input the value of 2st element : ");
    scanf("%d", &y);

    printf("Input the value of 1st element : ");
    scanf("%d", &z);    

    printf("=====================================\n");

    printf("* The Value Before swapping : \n\n");
    printf("=> Element 1 = %d\n=> Element 2 = %d\n=> Element 3 = %d\n", x, y, z);
    
    swap(&x, &y, &z);

    printf("=====================================\n");
    printf("* The Value After swapping : \n\n");
    printf("=> Element 1 = %d\n=> Element 2 = %d\n=> Element 3 = %d\n", x, y, z);

    return 0;
}

/**
 * @brief Swaping
 * 
 * @param a 
 * @param b 
 * @param c 
 */
void swap(int *Num1, int *Num2, int *Num3) 
{
    int temp;

    temp = *Num1;
    *Num1 = *Num2;
    *Num2 = temp;

    temp = *Num2;
    *Num2 = *Num3;
    *Num3 = temp;
}
