#include <iostream>
#include "src/car.h"
#include "src/lorry.h"

int main() {
    Car car1;
    std::cin >> car1;
    std::cout << car1 << std::endl;

    Lorry lorry1;
    std::cin >> lorry1;
    std::cout << lorry1 << std::endl;

    std::cout << "Vsego obectov: " << Car::getCount() << std::endl;

    return 0;
}
