// GitHub: https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-4.2

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    // Ввод элементов массива
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортировка массива от меньшего к большему
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Вывод отсортированного массива
    printf("The sorted array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}