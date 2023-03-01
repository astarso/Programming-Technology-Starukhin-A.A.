#include <iostream>
#include <fstream>
#include <string>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-8.2

// Определение своего исключения FileWasNotOpenedException
class FileWasNotOpenedException : public std::exception {
public:
    const char* what() const noexcept override {
        return "File was not opened!";
    }
};

// Функция для чтения данных из файла
std::string readDataFromFile(const std::string& filename) {
    std::ifstream file(filename); // Открываем файл
    if (!file.is_open()) { // Если файл не был открыт, выбрасываем исключение
        throw FileWasNotOpenedException();
    }

    std::string data; // Создаем строку для хранения данных из файла
    std::string line; // Создаем строку для хранения текущей строки из файла
    while (std::getline(file, line)) { // Считываем файл построчно
        data += line + '\n'; // Добавляем текущую строку в общую строку данных
    }

    return data; // Возвращаем данные из файла
}

int main() {
    try {
        std::string data = readDataFromFile("example.txt"); // Читаем данные из файла

        std::cout << "Data from file:\n" << data << std::endl; // Выводим данные на экран
    }
    catch (const FileWasNotOpenedException& ex) { // Если произошло исключение FileWasNotOpenedException, обрабатываем его
        std::cerr << "Exception caught: " << ex.what() << std::endl; // Выводим сообщение об ошибке на экран
    }

    return 0;
}