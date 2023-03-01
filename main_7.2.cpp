// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-7.2

#include <stdio.h>

// функция для вывода элементов массива на экран
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // выводим i-ый элемент массива
    }
    printf("\n");  // перевод строки после вывода массива
}

int main() {
    // объявляем первый массив и его размер
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1)/sizeof(arr1[0]); // размер массива равен количеству элементов в массиве
    
    // объявляем второй массив и его размер
    int arr2[] = {10, 20, 30};
    int size2 = sizeof(arr2)/sizeof(arr2[0]); // размер массива равен количеству элементов в массиве
    
    printf("Array 1: ");
    printArray(arr1, size1);  // выводим первый массив на экран
    
    printf("Array 2: ");
    printArray(arr2, size2);  // выводим второй массив на экран
    
    return 0;
}