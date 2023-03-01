#include <stdio.h>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-7.4

// Функция, которая изменяет первый и последний символ в строке на заданный символ
char* changeFirstLastChar(char *str, char ch) {
    int len = 0;

    // вычисляем длину строки
    while(str[len] != '\0') {
        len++;
    }

    // если длина строки больше 1, изменяем первый и последний символ
    if (len > 1) {
        str[0] = ch;
        str[len - 1] = ch;
    }

    // возвращаем указатель на измененную строку
    return str;
}

// Функция, которая удаляет начальные и конечные пробелы в строке
char* trimString(char *str) {
    int len = 0;

    // вычисляем длину строки
    while(str[len] != '\0') {
        len++;
    }

    // удаляем начальные пробелы
    while (str[0] == ' ' && len > 0) {
        for (int i = 0; i < len; i++) {
            str[i] = str[i+1];
        }
        len--;
    }

    // удаляем конечные пробелы
    while (str[len-1] == ' ' && len > 0) {
        str[len-1] = '\0';
        len--;
    }

    // возвращаем указатель на измененную строку
    return str;
}

int main() {
    char str[100];
    char ch;

    // вводим строку и символ
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter a character: ");
    scanf("%c", &ch);
    getchar(); // очистка буфера ввода
    printf("\n");

    // изменяем первый и последний символ строки и выводим результат
    char *result1 = changeFirstLastChar(str, ch);
    printf("Original string: %s\nModified string: %s\n", str, result1);

    // вводим новую строку и удаляем начальные и конечные пробелы
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    char *result2 = trimString(str);
    printf("Original string: %s\nTrimmed string: %s\n", str, result2);

    return 0;
}