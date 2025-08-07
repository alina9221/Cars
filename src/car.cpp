#include "car.h"

int Car::count = 0;

Car::Car() : trade_mark(""), cylinders(0), power(0) {
    count++;
}

Car::Car(const std::string& tm, int cyl, int pwr) 
    : trade_mark(tm), cylinders(cyl), power(pwr) {
    count++;
}

Car::~Car() {
    count--;
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << "Marka: " << car.trade_mark 
       << ", Cylinder: " << car.cylinders 
       << ", moshnost: " << car.power;
    return os;
}

std::istream& operator>>(std::istream& is, Car& car) {
    std::cout << "Vvedite Marku: ";
    is >> car.trade_mark;
    std::cout << "Vvedite kol-vo cylindrov: ";
    is >> car.cylinders;
    std::cout << "Vvedite moshnost: ";
    is >> car.power;
    return is;
}

int Car::getCount() {
    return count;
}
