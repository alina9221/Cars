#pragma once
#include "car.h"

class Lorry : public Car {
private:
    int carrying;

public:
    Lorry();
    Lorry(const std::string& tm, int cyl, int pwr, int carry);
    
    friend std::ostream& operator<<(std::ostream& os, const Lorry& lorry);
    friend std::istream& operator>>(std::istream& is, Lorry& lorry);
};
