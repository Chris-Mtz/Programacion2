//
// Created by crist on 30/04/2024.
//

#ifndef CRISTIAN_PROGRAMAS_ANIMAL_H
#define CRISTIAN_PROGRAMAS_ANIMAL_H

#include <string>

class Animal {
public:
    Animal();
    Animal(Animal &rhs);
    Animal(std::string nombre, float peso, int edad, float altura, std::string genero);
    virtual ~Animal();

    virtual void makeSound();

private:
    std::string nombre;
    float peso;
    int edad;
    float altura;
    std::string genero;
};


#endif //CRISTIAN_PROGRAMAS_ANIMAL_H