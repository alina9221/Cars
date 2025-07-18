#include <iostream>
#include <src/car.h>
#include <src/lorry.h>

int count(const Car &car)
{
    return car.count_;
}

int main()
{
    Car mazik("Mazik", 6, 180);

    std:: cout <<  "Car: " << mazik.getName() << " cylinders " << mazik.getCylinder() << " has power " << mazik.getPower() << std::endl; 

    Lorry belazik("BelAZik",18,3500,180);

    
    std::cout << "lorry: " << belazik.getName() << " has power " << belazik.getPower() << " cylinders " << belazik.getCylinder() << " and can carry "
              << belazik.getCarrying() <<  std::endl;

    std::cout << count(belazik) << std::endl;
    return 0;
}


