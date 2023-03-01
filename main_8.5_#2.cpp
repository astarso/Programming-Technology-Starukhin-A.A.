#include <stdio.h>

// https://github.com/astarso/Programming-Technology-Starukhin-A.A./tree/Homework-8.5

class Car {
protected:
    const char* company;
    const char* model;

public:
    Car(const char* _company, const char* _model) : company(_company), model(_model) {}

    virtual void printInfo() {
        printf("Car company: %s\n", company);
        printf("Car model: %s\n", model);
    }
};

class PassengerCar : virtual public Car {
public:
    PassengerCar(const char* _company, const char* _model) : Car(_company, _model) {}

    void printInfo() override {
        printf("Passenger car company: %s\n", company);
        printf("Passenger car model: %s\n", model);
    }
};

class Bus : virtual public Car {
public:
    Bus(const char* _company, const char* _model) : Car(_company, _model) {}

    void printInfo() override {
        printf("Bus company: %s\n", company);
        printf("Bus model: %s\n", model);
    }
};

class Minivan : public PassengerCar, public Bus {
public:
    Minivan(const char* _company, const char* _model) : PassengerCar(_company, _model), Bus(_company, _model), Car(_company, _model) {}

    void printInfo() override {
        printf("Minivan company: %s\n", company);
        printf("Minivan model: %s\n", model);
    }
};

int main() {
    Car* car1 = new Car("Toyota", "Camry");
    car1->printInfo();
    printf("\n");

    PassengerCar* car2 = new PassengerCar("Audi", "A6");
    car2->printInfo();
    printf("\n");

    Bus* car3 = new Bus("Mercedes-Benz", "Citaro");
    car3->printInfo();
    printf("\n");

    Minivan* car4 = new Minivan("Honda", "Odyssey");
    car4->printInfo();

    return 0;
}