#include <stdio.h>

// GitHub https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-4.4

int main() {
    int n, i;
    float sum = 0.0, average;
    int min, max;

	// Ввод пользователя
    printf("Enter the number of elements: ");
    scanf("%d", &n);

	// создаем массив для хранения n чисел
    int arr[n];

	// заполняем массив и одновременно находим сумму
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

	// находим минимальное и максимальное значение
    min = arr[0];
    max = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

	// находим среднее арифметическое
    average = sum / n;

	// выводим результаты
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Sum: %0.2f\n", sum);
    printf("Average: %0.2f\n", average);

    return 0;
}