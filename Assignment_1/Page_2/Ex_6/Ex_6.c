/**
 * @file Ex_6.c
 * @author Ziad Mohamed Fathi
 * @brief  Swap two numbers without temp variable.
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
#include <stdlib.h>

float Num1 = 0;
float Num2 = 0;

void Swapping(float N1, float N2);

int main(void)
{
    printf("\n# Before swapping\n");
    printf("==============================\n");
    printf("\nEnter value of Number 1 : ");
    scanf("%f", &Num1);

    printf("Enter value of Number 2 : ");
    scanf("%f", &Num2);

    printf("\n======================================================\n");

    printf("\n# After swapping\n");
    printf("==============================\n");
    Swapping(Num1, Num2);
    printf("\n==============================\n");

    return 0;
}

/**
 * @brief Swap two numbers without temp variable.
 *
 * @param N1
 * @param N2
 */
void Swapping(float N1, float N2)
{
    
    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;

    printf("\n=> value of Number 1 : %.2f\n", N1);
    printf("=> value of Number 2 : %.2f\n", N2);
}