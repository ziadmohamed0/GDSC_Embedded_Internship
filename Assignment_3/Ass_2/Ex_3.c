/**
 * @file Ex_7.c
 * @author Ziad Mohammed Fathi
 * @brief
 * @version 0.1
 * @date 2024-03-08
 *
 * @copyright Copyright (c) 2024
 *
 */
/* ========== Section : Includes ========== */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ========== Section : Macros ========== */
#define Max_Students 3

/* ========== Section : Functions Declarations ========== */
void Print_Data(void);
void get_Data(void);

/* ========== Section : Structures ========== */
typedef struct
{
    char Name[20];
    float Grade;
    int ID;
}Students_Data;

/* ========== Section : Variables Declarations ========== */
Students_Data arr_stud[Max_Students];

/* ========== Section : Main Function ========== */
int main(void)
{

    get_Data();
    Print_Data();

    return 0 ;
}


/* ========== Section : Functions Definations ========== */
/**
 * @brief Get the Data object
 *
 */
void get_Data(void)
{
    printf("/**** Enter students’ information ****/\n\n");
    for (int Counter = 0; Counter < Max_Students; Counter++)
    {

        printf("\t\t   *Student [%d]\n", (Counter + 1));
        printf("\t       =====================\n");

        printf("* Name : ");
        gets(arr_stud[Counter].Name);

        printf("* ID_number : ");
        scanf("%d", &((arr_stud[Counter]).ID));
        getchar();

        printf("* Grade : ");
        scanf("%f", &((arr_stud[Counter]).Grade));
        getchar();
        printf("\n=========================================\n\n");
    }
}

/**
 * @brief Print the Data object
 *
 */
void Print_Data(void)
{
    printf("/**** Displaying information ****/\n\n");
    for (int Counter = 0; Counter < Max_Students; Counter++)
    {

        printf("\t\t   Student [%d]\n",(Counter+1));
        printf("\t       =====================\n");

        printf("=> Name : %s\n",arr_stud[Counter].Name);

        printf("=> ID_number : %d\n",arr_stud[Counter].ID);

        printf("=> Grade : %.2f\n",arr_stud[Counter].Grade);
        printf("\n=========================================\n\n");

    }
}