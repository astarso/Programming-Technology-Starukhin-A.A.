#include <stdio.h>
#include <math.h>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-8.5

// абстрактный класс Figure
class Figure {
public:
    virtual float area() = 0; // виртуальная функция вычисления площади
};

// класс Parallelogram, наследник Figure
class Parallelogram : public Figure {
protected:
    float base; // основание
    float height; // высота
public:
    Parallelogram(float b, float h) : base(b), height(h) {} // конструктор с параметрами
    float area() { return base * height; } // вычисление площади
};

// класс Rectangle, наследник Parallelogram
class Rectangle : public Parallelogram {
public:
    Rectangle(float b, float h) : Parallelogram(b, h) {} // конструктор с параметрами
    float area() { return base * height; } // переопределенное вычисление площади
};

// класс Square, наследник Rectangle
class Square : public Rectangle {
public:
    Square(float a) : Rectangle(a, a) {} // конструктор с параметром стороны
    float area() { return base * height; } // переопределенное вычисление площади
};

// класс Rhombus, наследник Parallelogram
class Rhombus : public Parallelogram {
public:
    Rhombus(float d1, float d2) : Parallelogram(d1, d2) {} // конструктор с параметрами диагоналей
    float area() { return base * height / 2; } // переопределенное вычисление площади
};

// класс Circle, наследник Figure
class Circle : public Figure {
protected:
    float radius; // радиус
public:
    Circle(float r) : radius(r) {} // конструктор с параметром радиуса
    float area() { return M_PI * radius * radius; } // вычисление площади
};

int main() {
    Figure *f1 = new Rectangle(4, 5); // создание прямоугольника
    printf("Rectangle area: %.2f\n", f1->area()); // вывод площади

    Figure *f2 = new Square(3); // создание квадрата
    printf("Square area: %.2f\n", f2->area()); // вывод площади

    Figure *f3 = new Rhombus(6, 8); // создание ромба
    printf("Rhombus area: %.2f\n", f3->area()); // вывод площади

    Figure *f4 = new Circle(2); // создание круга
    printf("Circle area: %.2f\n", f4->area()); // вывод площади

    return 0;
}