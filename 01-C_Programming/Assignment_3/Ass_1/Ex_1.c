/**
 * @file Ex_1.c
 * @author Ziad Mohammed Fathi
 * @brief 
 * @version 0.1
 * @date 2024-03-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/* ---------- Section : Includes ---------- */
#include <stdlib.h>
#include <stdio.h>

/* ---------- Section : Declarations ---------- */
unsigned int MyStrLen(char *STR);
char Str[20];

/* ---------- Section : Main Function ---------- */
int main (void)
{
    printf("Enter a string : ");
    gets(&Str);
    unsigned int Res = MyStrLen(Str);
    printf("=> Length of the string : [%d]\n",Res);
    return 0;
}
/* ---------- Section : Defination ---------- */
/**
 * @brief Return the Counter (Counter is : A Size Number of String).
 * 
 * @param STR 
 * @return unsigned int 
 */
unsigned int MyStrLen(char *STR)
{
    unsigned int Counter = 0;
    for (Counter = 0; STR[Counter] != '\0'; Counter++);
    
    return Counter;
}
