#include <stdio.h>

// GitHub https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-3.7

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    
    printf("The sum of numbers from 1 to 100 is %d", sum);

    return 0;
}