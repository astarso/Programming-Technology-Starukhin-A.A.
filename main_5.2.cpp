#include <stdio.h>

// GitHub https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-5.2

int main() {
	
    int n, m;
    
    // Запрос на ввод количества строк
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Запрос на ввод количества столбцов
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    
    // Объявление двумерного массива с заданным количеством строк и столбцов
    int arr[n][m];
    
    // Объявление двумерного массива с заданным количеством строк и столбцов
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Объявление двумерного массива с заданным количеством строк и столбцов
    printf("The entered array is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}