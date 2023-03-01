#include <stdio.h>
#include <stdexcept>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-8.2

float divide(int x) {
    if (x == 0) {
        throw std::invalid_argument("division by zero");
    }
    return 1024.0 / x;
}

int main() {
    int x = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    try {
        float result = divide(x);
        printf("1024 divided by %d is %f\n", x, result);
    }
    catch (const std::invalid_argument& e) {
        printf("Error: %s\n", e.what());
    }

    return 0;
}