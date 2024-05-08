/**
 * @file Problem_1.c
 * @author Ziad Moahmmed Fathi
 * @version 0.1
 * @date 2024-04-22
 * @brief input elements in an array and print the elements and 
 *        reverse array’s elements using pointers.
 * @copyright Copyright (c) 2024
 * 
 */
/* ---------- Section : Includes ---------- */
#include <stdlib.h>
#include <stdio.h>

/* ---------- Section : Macros ---------- */
#define MAX_SIZE 100

/* ---------- Section : Functions Prototype ---------- */
void reverse_array(int arr[], int n);
void print_array(int arr[], int n);
void input_array(int arr[], int n); 

/* ---------- Section : Main function ---------- */
int main(void) 
{
    int n;
    printf("\n=====================================\n\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n=====================================\n\n");

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid array size. Please enter a positive integer less than or equal to %d.\n", MAX_SIZE);
        return 1;
    }

    int arr[MAX_SIZE];

    input_array(arr, n);
    
    printf("\n=====================================\n\n");
    printf("* Original array:\n");
    print_array(arr, n);

    reverse_array(arr, n);

    printf("\n=====================================\n\n");
    printf("* Reversed array:\n");
    print_array(arr, n);
    printf("\n=====================================\n\n");

    return 0;
}

/* ---------- Section : Functions Definations ---------- */
/**
 * @brief Function to input elements in an array
 * 
 * @param arr 
 * @param n 
 */
void input_array(int arr[], int n) 
{
    printf("=> Enter elements of the array:\n");
    printf("\n\n");

    for (int i = 0; i < n; ++i) {
        printf("=> Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
/**
 * @brief Function to print elements of the array
 * 
 * @param arr 
 * @param n 
 */
void print_array(int arr[], int n) 
{
    printf("=> Array elements:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/**
 * @brief Function to reverse the array using pointers
 * 
 * @param arr 
 * @param n 
 */
void reverse_array(int arr[], int n) 
{
    int *left = arr;
    int *right = arr + n - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        ++left;
        --right;
    }
}