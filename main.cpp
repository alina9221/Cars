#include <iostream>
#include <src/car.h>
#include <src/lorry.h>
#include <string>

using namespace std;

class Small {
private:
    string name;
    int cilynder;
    int power;

public:
    // Конструктор
    Small(string n = "", int c = 0, int p = 0) : name(n), cilynder(c), power(p) {}
    

    // Перегрузка оператора вывода (<<)
    friend ostream& operator<<(ostream& os, const Small& small) {
        os << "Название: " << small.name << ", Кол-во цилиндров: " << small.cilynder << ", Мощность: " << small.power;
        return os;
    }

    // Перегрузка оператора ввода (>>)
    friend istream& operator >> (istream& is, Small& small) {
        std:: cout << "Vvedite nazvanue: " << endl ;
        std:: getline(is, small.name);  // Читаем всю строку (включая пробелы)
        std:: cout << "Vevdite kol-o cilindrov: " << endl ;
        is >> small.cilynder;
        std::  cout << "Vvedite moshnost: " << endl;
        is >> small.power;
        is.ignore();  // Очищаем буфер после ввода числа
        return is;
    }
};


int count(const Car &car)
{
    return car.count_;
}




int main()
{
    //Вариант перегрузки
    Small car_s;
    // Вводим данные с клавиатуры
    std:: cin >> car_s;
    // Выводим данные
    std:: cout << car_s << endl;


    
    //
    Car mazik("Mazik", 6, 180);
    std:: cout <<  "Car: " << mazik.getName() << " cylinders " << mazik.getCylinder() << " has power " << mazik.getPower() << std::endl; 
    Lorry belazik("BelAZik",18,3500,180);
    std::cout << "lorry: " << belazik.getName() << " has power " << belazik.getPower() << " cylinders " << belazik.getCylinder() << " and can carry "
              << belazik.getCarrying() <<  std::endl;
    std::cout << count(belazik) << std::endl;
    return 0;
}


