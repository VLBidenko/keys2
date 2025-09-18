#include "Animal.h"
#include <windows.h>

Animal::Animal(const std::string& name) : name(name) {
    // Устанавливаем кодировку для консоли
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

void Animal::makeSound() {
    std::cout << name << " издает какой-то звук" << std::endl;
}

void Animal::eat() {
    std::cout << name << " ест" << std::endl;
} 