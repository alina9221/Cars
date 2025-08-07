#include "lorry.h"

Lorry::Lorry() : Car(), carrying(0) {}

Lorry::Lorry(const std::string& tm, int cyl, int pwr, int carry)
    : Car(tm, cyl, pwr), carrying(carry) {}

std::ostream& operator<<(std::ostream& os, const Lorry& lorry) {
    os << static_cast<const Car&>(lorry)
       << ", Gruzopodemnost: " << lorry.carrying;
    return os;
}

std::istream& operator>>(std::istream& is, Lorry& lorry) {
    is >> static_cast<Car&>(lorry);
    std::cout << "Vvedite Gruzopodemnost: ";
    is >> lorry.carrying;
    return is;
}
