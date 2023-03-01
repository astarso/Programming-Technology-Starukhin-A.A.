#include <stdio.h>



// Абстрактный класс функция
class Function {
public:
    virtual double calculate(double x) = 0; // Виртуальный метод вычисления значения функции
    virtual void print() = 0; // Виртуальный метод вывода результата на экран
};

// Класс эллипс
class Ellipse : public Function {
private:
    double a, b; // Параметры эллипса

public:
    Ellipse(double a, double b) : a(a), b(b) {}

    double calculate(double x) {
        return a * b * x; // Вычисление значения функции y = f(x) = a * b * x
    }

    void print() {
        printf("Ellipse: a = %f, b = %f\n", a, b); // Вывод параметров эллипса
    }
};

// Класс гипербола
class Hyperbola : public Function {
private:
    double a, b; // Параметры гиперболы

public:
    Hyperbola(double a, double b) : a(a), b(b) {}

    double calculate(double x) {
        return a / (b * x); // Вычисление значения функции y = f(x) = a / (b * x)
    }

    void print() {
        printf("Hyperbola: a = %f, b = %f\n", a, b); // Вывод параметров гиперболы
    }
};

// Класс парабола
class Parabola : public Function {
private:
    double a, b, c; // Параметры параболы

public:
    Parabola(double a, double b, double c) : a(a), b(b), c(c) {}

    double calculate(double x) {
        return a * x * x + b * x + c; // Вычисление значения функции y = f(x) = a * x^2 + b * x + c
    }

    void print() {
        printf("Parabola: a = %f, b = %f, c = %f\n", a, b, c); // Вывод параметров параболы
    }
};

// Функция вывода
void printFunction(Function& func) {
    double x = 1.0; // Точка, в которой будем вычислять функцию
    double y = func.calculate(x); // Вычисление значения функции
    func.print(); // Вывод параметров функции
    printf("f(%f) = %f\n", x, y); // Вывод значения функции
}

int main() {
    Ellipse ellipse(2.0, 3.0);
    Hyperbola hyperbola(1.0, 2.0);
    Parabola parabola(1.0, 2.0, 3.0);

    Function* funcs[3] = { &ellipse, &hyperbola, &parabola };

    for (int i = 0; i < 3; i++) {
        printFunction(*funcs[i]);
    }

    return 0;
}
