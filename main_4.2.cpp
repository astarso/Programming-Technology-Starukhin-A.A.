#include <stdio.h>

// GitHub: https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-4.2

int main() {
    // Задание №1
    int arr[7];

    // заполнение массива и вывод элементов
    printf("Task 1:\nEnter 7 integer values:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of array:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }

    // Задание №2
    int n;
    printf("\n\nTask 2:\nEnter the number of integer values to be stored in array:\n");
    scanf("%d", &n);

    int arr2[n];

    // заполнение массива и вывод элементов
    printf("Enter %d integer values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Elements of array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}