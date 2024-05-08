/**
 * @file Problem_3.c
 * @author Ziad Moahmmed Fathi
 * @brief  calculate the length of a string using a pointer.
 * @version 0.1
 * @date 2024-04-22
 * @copyright Copyright (c) 2024
 * 
 */
/* ---------- Section : Includes ---------- */
#include <stdlib.h>
#include <stdio.h>
/* ---------- Section : Functions Prototype ---------- */
int string_length(const char *str);

/* ---------- Section : Main function ---------- */
int main(void)
{
    char input_string[100];
    printf("\n=====================================\n");
    printf("=> Enter a string: ");
    scanf("%s", input_string);

    int length = string_length(input_string);
    printf("=====================================\n");
    printf("=> Length of the string : %d\n", length);
    printf("=====================================\n");
    return 0;
}

/* ---------- Section : Functions Definations ---------- */
/**
 * @brief Function to calculate the length of a string using a pointer
 * 
 * @param str 
 * @return int 
 */
int string_length(const char *str) 
{
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}