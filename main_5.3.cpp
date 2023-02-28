// GitHub https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-5.3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m];
    srand(time(NULL)); // инициализация генератора псевдослучайных чисел
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = rand() % 10 - 2; // генерация чисел от -2 до 7
        }
    }

    printf("The randomly generated array is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}