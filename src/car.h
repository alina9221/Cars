#pragma once
#include <string>
#include <iostream>

class Car {
protected:
    std::string trade_mark;
    int cylinders;
    int power;
    static int count; // для подсчёта объектов

public:
    Car();
    Car(const std::string& tm, int cyl, int pwr);
    virtual ~Car();

    friend std::ostream& operator<<(std::ostream& os, const Car& car);
    friend std::istream& operator>>(std::istream& is, Car& car);

    static int getCount();
};
