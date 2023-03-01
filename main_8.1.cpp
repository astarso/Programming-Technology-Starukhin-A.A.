#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50  // Макрос для удобства

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-8.1

// Определение класса Person
typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;
    double weight;
} Person;

// Методы для установки и получения имени
void setName(Person* person, char* name) {
    strcpy(person->name, name);
}
char* getName(Person* person) {
    return person->name;
}

// Методы изменения возраста
void incrementAge(Person* person) {
    person->age++;
}
void decrementAge(Person* person) {
    person->age--;
}

// Методы установки и получения веса
void setWeight(Person* person, double weight) {
    person->weight = weight;
}
double getWeight(Person* person) {
    return person->weight;
}

// Определение класса Student
typedef struct {
    Person person;
    int yearOfStudy;
} Student;

// Методы установки и получения года обучения
void setYearOfStudy(Student* student, int yearOfStudy) {
    student->yearOfStudy = yearOfStudy;
}
int getYearOfStudy(Student* student) {
    return student->yearOfStudy;
}

int main() {
    // Создание студента
    Student student = {
        .person = {"John Smith", 20, 'M', 70.5},
        .yearOfStudy = 2
    };

    // Вывод информации о студенте
    printf("Student name: %s\n", getName(&student.person));
    printf("Student age: %d\n", student.person.age);
    printf("Student gender: %c\n", student.person.gender);
    printf("Student weight: %lf\n", getWeight(&student.person));
    printf("Student year of study: %d\n", student.yearOfStudy);
    printf("\n");

    // Изменение информации о студенте
    setYearOfStudy(&student, 3);
    incrementAge(&student.person);
    setWeight(&student.person, 72.1);

    // Вывод обновленной информации о студенте
    printf("Student name: %s\n", getName(&student.person));
    printf("Student age: %d\n", student.person.age);
    printf("Student gender: %c\n", student.person.gender);
    printf("Student weight: %lf\n", getWeight(&student.person));
    printf("Student year of study: %d\n", student.yearOfStudy);

    return 0;
}