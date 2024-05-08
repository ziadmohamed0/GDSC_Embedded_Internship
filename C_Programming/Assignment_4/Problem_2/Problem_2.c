/**
 * @file Problem_2.c
 * @author Ziad Moahmmed Fathi
 * @brief o find reverse of a given string using pointers.
 * @version 0.1
 * @date 2024-04-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/* ---------- Section : Includes ---------- */
#include <stdio.h>
#include <string.h>

/* ---------- Section : Functions Prototype ---------- */
void reverse_string(char *str);

/* ---------- Section : Main function ---------- */
int main(void) 
{
    char input_string[100];
    printf("\n=====================================\n");
    printf("=> Enter a string : ");
    scanf("%s", input_string);

    printf("=====================================\n");
    printf("=> Original string : %s\n", input_string);

    reverse_string(input_string);
    printf("=====================================\n");
    printf("=> Reversed string : %s\n", input_string);
    printf("=====================================\n");

    return 0;
}
/* ---------- Section : Functions Definations ---------- */
/**
 * @brief Function to reverse a string using pointers
 * 
 * @param str 
 */
void reverse_string(char *str) 
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }
}