#pragma once
#include <string>
#include <iostream>

class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name);
    virtual void makeSound();
    virtual void eat();
}; 