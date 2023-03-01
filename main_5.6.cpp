#include <stdio.h>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-5.6

const int N = 3; // Количество строк
const int M = 4; // Количество столбцов

// Функция сортировки строк
void sort_rows(int arr[N][M]) {
    for (int i = 0; i < N; i++) { // Проходим по каждой строке
        for (int j = 0; j < M - 1; j++) { // Проходим по каждому элементу строки, кроме последнего
            for (int k = j + 1; k < M; k++) { // Проходим по каждому элементу строки, начиная с j+1
                if (arr[i][k] < arr[i][j]) { // Если следующий элемент меньше текущего
                    // Меняем местами элементы в текущей и следующей позиции
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}

// Функция обмена местами столбцов
void swap_columns(int arr[N][M], int c1, int c2) {
    for (int i = 0; i < N; i++) { // Проходим по каждой строке
        // Меняем местами элементы в столбцах c1 и c2 для текущей строки
        int temp = arr[i][c1];
        arr[i][c1] = arr[i][c2];
        arr[i][c2] = temp;
    }
}

int main() {
    int arr[N][M] = {{9, 5, 7, 3},
                     {2, 8, 1, 6},
                     {4, 0, 9, 5}};

    // Выводим исходный массив
    printf("Original array:\n");
    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Сортируем каждую строку массива
    sort_rows(arr);

    // Выводим отсортированный массив
    printf("\nSorted array:\n");
    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Меняем местами первый и последний столбцы массива
    swap_columns(arr, 0, M - 1);

    // Выводим измененный массив
    printf("\nSwapped array:\n");
    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
