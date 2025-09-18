#include "Dog.h"

Dog::Dog(const std::string& name) : Animal(name) {}

void Dog::makeSound() {
    std::cout << name << " говорит: Гав-гав!" << std::endl;
}

void Dog::eat() {
    std::cout << name << " ест собачий корм" << std::endl;
}

void Dog::fetch() {
    std::cout << name << " приносит мячик" << std::endl;
} 