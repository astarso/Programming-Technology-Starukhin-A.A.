#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50


// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-8.1

// Базовый класс Person
class Person {
protected:
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;

public:
    // Конструктор
    Person(const char* name, int age, char gender)
        : age(age), gender(gender) {
        strncpy(this->name, name, MAX_NAME_LENGTH);
    }

    // Средства получения и настройки имени, возраста и пола
    const char* getName() const {
        return name;
    }
    void setName(const char* name) {
        strncpy(this->name, name, MAX_NAME_LENGTH);
    }
    int getAge() const {
        return age;
    }
    void setAge(int age) {
        this->age = age;
    }
    char getGender() const {
        return gender;
    }
    void setGender(char gender) {
        this->gender = gender;
    }

    // Способ получения пропуска для person
    virtual const char* getPass() const = 0;
};

// Производный класс Student от Person
class Student : public Person {
private:
    int yearOfStudy;
    int supeRid;
    char pass[MAX_NAME_LENGTH + 10];

public:
    // Конструктор
    Student(const char* name, int age, char gender, int yearOfStudy, int supeRid)
        : Person(name, age, gender), yearOfStudy(yearOfStudy), supeRid(supeRid) {
        sprintf(pass, "STU%d%s", yearOfStudy, name, supeRid);
    }

    int getYearOfStudy() const {
        return yearOfStudy;
    }
    
    int getSuperid() const {
    	return supeRid;
	}

    // Реализация метода getPass для students
    const char* getPass() const override {
        return pass;
    }
};

// Производный класс  Teacher от Person
class Teacher : public Person {
private:
    char pass[MAX_NAME_LENGTH + 10];
    int supeRid;

public:
    // Конструктор
    Teacher(const char* name, int age, char gender, int supeRid)
        : Person(name, age, gender), supeRid(supeRid){
        sprintf(pass, "TEA%s", name, supeRid);
    }
    
    int getSuperid() const {
    	return supeRid;
	}

    // Реализация метода getPass для teachers
    const char* getPass() const override {
        return pass;
    }
};

// Производный класс Scientist от Person
class Scientist : public Person {
private:
    char pass[MAX_NAME_LENGTH + 10];
    int supeRid;

public:
    // Конструктор
    Scientist(const char* name, int age, char gender, int supeRid)
        : Person(name, age, gender), supeRid(supeRid) {
        sprintf(pass, "SCI%s", name, supeRid);
    }
    
    int getSuperid() const {
    	return supeRid;
	}

    // Реализация метода getPass для scientists
    const char* getPass() const override {
        return pass;
    }
};

// Производный класс Technician от Person
class Technician : public Person {
private:
    char pass[MAX_NAME_LENGTH + 10];
    int supeRid;

public:
    // Конструктор
    Technician(const char* name, int age, char gender, int supeRid)
        : Person(name, age, gender), supeRid(supeRid) {
        sprintf(pass, "TEC%s", name, supeRid);
    }
    
    int getSuperid() const {
    	return supeRid;
	}

    // Реализация метода getPass для технических специалистов
    const char* getPass() const override {
        return pass;
    }
};

int main() {
	
	// Студент ID 45 / Учитель ID 99 / Ученый ID 1 / Техник ID 5
	// Cистема доступа по ID и вывод информации о пользователе
	
    Student student("John Smith", 20, 'M', 2, 45);
    Teacher teacher("Jane Doe", 35, 'F', 99);
    Scientist scientist("Albert Einstein", 76, 'M', 1);
    Technician technician("Bob Smith", 42, 'M', 5);


    printf("Welcome to the university identification system \n");
    printf("\n");
    
    int s;
    printf("Enter id: ");
    scanf("%d", &s);
    printf("\n");
    
	if(s == 45)
	{
		printf("Student name: %s\n", student.getName());
    	printf("Student age: %d\n", student.getAge());	
    	printf("Student pass: %s\n", student.getPass());
    	printf("Student id: %s\n", teacher.getSuperid());
	}
	
	if(s == 99)
	{
		printf("Teacher name: %s\n", teacher.getName());
    	printf("Teacher age: %d\n", teacher.getAge());
		printf("Teacher pass: %s\n", teacher.getPass());
		printf("Teacher id: %s\n", teacher.getSuperid());
	}
	
    if(s == 1)
    {
    	printf("Scientist name: %s\n", scientist.getName());
    	printf("Scientist age: %s\n", scientist.getAge());
    	printf("Scientist pass: %s\n", scientist.getPass());
    	printf("Scientist id: %s\n", teacher.getSuperid());
	}
	
	if(s == 5)
	{
		printf("Technician name: %s\n", technician.getName());
    	printf("Technician age: %d\n", technician.getAge());	
    	printf("Technician pass: %s\n", technician.getPass());
    	printf("Technician id: %s\n", teacher.getSuperid());
	}
	
    return 0;
}