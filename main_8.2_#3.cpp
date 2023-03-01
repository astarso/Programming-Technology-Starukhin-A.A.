#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-8.2

// Функция, которая принимает строку, парсит ее и вычисляет математическую операцию
double calculate(std::string input) {
    // Создаем строковый поток и передаем в него строку
    std::istringstream iss(input);

    double left, right;
    char op;

    // Парсим строку и сохраняем результаты в переменных
    if (!(iss >> left >> op >> right)) {
        // Если не удалось распарсить строку, выбрасываем исключение
        throw std::invalid_argument("Invalid input string");
    }

    // Выполняем математическую операцию в зависимости от оператора
    switch (op) {
        case '+':
            return left + right;
        case '-':
            return left - right;
        case '*':
            return left * right;
        case '/':
            if (right == 0) {
                // Обрабатываем ошибку деления на ноль
                throw std::invalid_argument("Division by zero");
            }
            return left / right;
        default:
            // Если введен неподдерживаемый оператор, выбрасываем исключение
            throw std::invalid_argument("Invalid operator");
    }
}

int main() {
    std::string input;

    std::cout << "Enter a math expression (e.g. 1+2, 4-5, 8*9): ";
    std::getline(std::cin, input);

    try {
        double result = calculate(input);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        // Если произошла ошибка, выводим сообщение об ошибке
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}