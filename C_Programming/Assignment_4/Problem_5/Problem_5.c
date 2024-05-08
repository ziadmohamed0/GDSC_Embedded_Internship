/**
 * @file Problem_5.c
 * @author Ziad Moahmmed Fathi
 * @brief access members of a structure using pointers.
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

#include <stdio.h>

// Define a structure called 'person'
struct person {
    char name[20];
    int age;
    int ID;
};

int main(void) 
{
    struct person *personPtr, person1;
    personPtr = &person1;
    printf("\n====================\n");

    printf("=> Enter Name : ");
    scanf("%s", &personPtr->name);

    printf("=> Enter age  : ");
    scanf("%d", &personPtr->age);

    printf("=> Enter ID   : ");
    scanf("%d", &personPtr->ID);

    printf("\n====================\n");

    printf("* Displaying : \n\n");
    printf("=> Name : %s\n", personPtr->name);
    printf("=> Age  : %d\n", personPtr->age);
    printf("=> ID   : %d\n", personPtr->ID);

    return 0;
}
