#include <stdio.h>

// GitHub https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-2.6

int main() {
    int day, month, year;
    
    // Запрашиваем у пользователя ввод в формате день месяц год
    printf("Enter your birth date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    
    // Проверяем, является ли год рождения високосным
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Your birth year is a leap year.\n");
    } else {
    	// Если год не вискокосный
        printf("Your birth year is not a leap year.\n");
    }
    
    // Вычисляем знак китайского зодиака
    const char *zodiac[] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep"};
    int animal = year % 12;
    // Выводи кидайский знак пользователю
    printf("Your Chinese zodiac sign is the %s.\n", zodiac[animal]);
    
    // Вычисляем астрологический знак
    const char *astro[] = {"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};
    const int month_end[] = {20, 19, 20, 20, 21, 21, 22, 23, 23, 23, 22, 21};
    int astro_sign;
    if (day > month_end[month - 1]) {
        astro_sign = month;
    } else {
        astro_sign = month - 1;
    }
    // Выводим пользователю его знак
    printf("Your astrological sign is %s.\n", astro[astro_sign]);
    
    return 0;
}