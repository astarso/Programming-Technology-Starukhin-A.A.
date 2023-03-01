#include <stdio.h>
#include <string.h>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-6.4

int main() {
    // Задание 1
    char str1[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    
    // удаляем первый символ из строки
    for (int i = 0; i < strlen(str1); i++) {
        str1[i] = str1[i+1];
    }
    
    printf("The string after deleting the first character: %s\n", str1);
    
    // Задание 2
    char str2[100], buffer[100];
    int len = 0;
    printf("Enter a string: ");
    fgets(str2, 100, stdin);
    
    // копируем строку в буферную переменную в обратном порядке
    for (int i = strlen(str2) - 1; i >= 0; i--) {
        buffer[len] = str2[i];
        len++;
    }
    
    buffer[len] = '\0';
    
    printf("The reversed string: %s\n", buffer);
    
    return 0;
}
