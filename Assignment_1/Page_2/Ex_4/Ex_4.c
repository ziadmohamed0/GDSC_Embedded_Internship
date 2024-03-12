/**
 * @file Ex_4.c
 * @author Ziad Mohammed Fathi
 * @brief Find the Largest number Among three
 *        numbers and get the sum and average 
 *        of these numbers.
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
#include <stdlib.h>

float Larg(float N1, float N2, float N3);
float Summing(float N1, float N2, float N3);
float Average(float N1, float N2, float N3);

float Num1 = 0;
float Num2 = 0;
float Num3 = 0;


int main (void)
{
    printf("Enter Number 1 : ");
    scanf("%f",&Num1);

    printf("Enter Number 2 : ");
    scanf("%f", &Num2);

    printf("Enter Number 3 : ");
    scanf("%f", &Num3);
    printf("\n----------------------------------------\n");
    float Ret1 = Larg(Num1 , Num2 , Num3);
    printf("=> The largest number = %.2f\n",Ret1);

    float Ret2 = Summing(Num1, Num2, Num3);
    printf("=> Sum = %.2f\n", Ret2);

    float Ret3 = Average(Num1, Num2, Num3);
    printf("=> Average = %.2f\n\n", Ret3);

    return 0;
}

/**
 * @brief Find the Largest number Among three numbers
 * @param N1
 * @param N2
 * @param N3
 * @return float
 */
float Larg(float N1, float N2, float N3)
{
    float Ret = 0;

    if ((N1 >= N2) && (N1 >= N3))
    {
        Ret = N1;
    }
    else if (N2 >= N3)
    {
        Ret = N2;
    }
    else
    {
        Ret = N3;
    }
    return Ret;
}

/**
 * @brief get the sum of the three Numbers
 * @param N1
 * @param N2
 * @param N3
 * @return float
 */
float Summing(float N1, float N2, float N3)
{
    float Sum = N1 + N2 + N3;
    return Sum;
}

/**
 * @brief get the Average of the three Numbers
 * @param N1
 * @param N2
 * @param N3
 * @return float
 */
float Average(float N1, float N2, float N3)
{
    float Ret = Summing(N1, N2, N3)/3;
    return Ret;
}