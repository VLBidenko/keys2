#include "Dog.h"

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << "Демонстрация работы базового и производного классов:\n" << std::endl;

    Animal animal("Животное");
    std::cout << "Работа с базовым классом:" << std::endl;
    animal.makeSound();
    animal.eat();

    std::cout << "\nРабота с производным классом:" << std::endl;
    Dog dog("Бобик");
    dog.makeSound();
    dog.eat();
    dog.fetch();

    return 0;
} 