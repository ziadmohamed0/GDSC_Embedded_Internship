
/**
 * @file EX_2.c
 * @author Ziad Mohammed Fathi
 * @brief Reverse the number Using Function.
 * @version 0.1
 * @date 2024-02-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>
int num = 0;

int main(void) 
{
    printf("Enter the number : ");
    scanf("%d",&num);

    int reversedNum = reverseNumber(num);
    
    printf("=> Reverse of digits Number = %d\n\n", reversedNum);
    return 0;
}

/**
 * @brief Reverse the number 
 * 
 * @param num 
 * @return int 
 */
int reverseNumber(int num)
{
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = (reversedNum * 10) + (num % 10);
        num /= 10;
    }
    return reversedNum;
}