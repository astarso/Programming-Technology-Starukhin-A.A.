#include <stdio.h>

// GitHub https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-3.5

int main() {
    int i, sum = 0;
    
    // Вывод слова "Hello" 9 раз
    printf("Start Task #1\n");
    printf("\n");
    for (i = 0; i < 9; i++) {
        printf("Hello\n");
    }
    printf("\n");
    
    // Вывод чисел от 0 до 15
    printf("Start Task #1.1\n");
    printf("\n");
    for (i = 0; i <= 15; i++) {
        printf("%d\n", i);
    }
    printf("\n");
    
    // Вывод нечетных чисел от 0 до 15
    printf("Start Task #1.2\n");
    printf("\n");
    printf("Odd numbers from 0 to 15:\n");
    for (i = 1; i <= 15; i += 2) {
        printf("%d\n", i);
    }
    printf("\n");
    
    printf("Start Task #2\n");
    printf("\n");
    
    // Сумма чисел от 5 до 15
    for (i = 5; i <= 15; i++) {
        sum += i;
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}