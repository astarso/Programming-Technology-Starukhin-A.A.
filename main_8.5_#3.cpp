#include <stdio.h>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-8.5

class Fraction {
private:
    int numerator;   // числитель
    int denominator; // знаменатель

public:
    // Конструктор
    Fraction(int _numerator, int _denominator) {
        numerator = _numerator;
        if (_denominator != 0) {
            denominator = _denominator;
        } else {
            printf("Error: denominator can't be zero!\n");
            denominator = 1;
        }
    }

    // Метод для получения числителя
    int getNumerator() const {
        return numerator;
    }

    // Метод для получения знаменателя
    int getDenominator() const {
        return denominator;
    }

    // Перегрузка унарного оператора "-"
    Fraction operator-() const {
        return Fraction(-numerator, denominator);
    }

    // Перегрузка бинарного оператора "+"
    Fraction operator+(const Fraction& other) const {
        return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
    }

    // Перегрузка бинарного оператора "-"
    Fraction operator-(const Fraction& other) const {
        return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
    }

    // Перегрузка бинарного оператора "*"
    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    // Перегрузка бинарного оператора "/"
    Fraction operator/(const Fraction& other) const {
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }

    // Перегрузка оператора "==" (сравнение на равенство)
    bool operator==(const Fraction& other) const {
        return numerator * other.denominator == other.numerator * denominator;
    }

    // Перегрузка оператора "!=" (сравнение на неравенство)
    bool operator!=(const Fraction& other) const {
        return !(*this == other);
    }

    // Перегрузка оператора "<" (сравнение на меньше)
    bool operator<(const Fraction& other) const {
        return numerator * other.denominator < other.numerator * denominator;
    }

    // Перегрузка оператора ">=" (сравнение на больше или равно)
    bool operator>=(const Fraction& other) const {
        return !(*this < other);
    }

    // Перегрузка оператора ">" (сравнение на больше)
    bool operator>(const Fraction& other) const {
        return numerator * other.denominator > other.numerator * denominator;
    }

    // Перегрузка оператора "<=" (сравнение на меньше или равно)
    bool operator<=(const Fraction& other) const {
        return !(*this > other);
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(1, 2);

    Fraction f3 = f1 + f2;
    printf("f1 + f2 = %d/%d\n", f3.getNumerator(), f3.getDenominator());

    Fraction f4 = f1 - f2;
    printf("f1 - f2 = %d/%d\n", f4.getNumerator(), f4.getDenominator());
    
    Fraction f5 = f1 * f2;
	printf("f1 * f2 = %d/%d\n", f5.getNumerator(), f5.getDenominator());

	Fraction f6 = f1 / f2;
	printf("f1 / f2 = %d/%d\n", f6.getNumerator(), f6.getDenominator());

	Fraction f7 = -f1;
	printf("-f1 = %d/%d\n", f7.getNumerator(), f7.getDenominator());

if (f1 == f2) {
    printf("f1 == f2\n");
	}
else {
    printf("f1 != f2\n");
}

if (f1 != f2) {
    printf("f1 != f2\n");
} else {
    printf("f1 == f2\n");
}

if (f1 < f2) {
    printf("f1 < f2\n");
} else {
    printf("f1 >= f2\n");
}

if (f1 > f2) {
    printf("f1 > f2\n");
} else {
    printf("f1 <= f2\n");
}

if (f1 <= f2) {
    printf("f1 <= f2\n");
} else {
    printf("f1 > f2\n");
}

if (f1 >= f2) {
    printf("f1 >= f2\n");
} else {
    printf("f1 < f2\n");
}

return 0;

}
