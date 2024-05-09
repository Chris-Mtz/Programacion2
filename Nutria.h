//
// Created by crist on 30/04/2024.
//

#ifndef CRISTIAN_PROGRAMAS_NUTRIA_H
#define CRISTIAN_PROGRAMAS_NUTRIA_H

#include "Animal.h"

class Nutria: public Animal{
public:
    Nutria();
    Nutria(Nutria &rhs);
    Nutria(std::string nombre, float peso, int edad, float altura, std::string genero, std::string sociable, std::string nado);
    ~Nutria();

    void makeSound() override;

private:
    std::string nombre;
    float peso;
    int edad;
    float altura;
    std::string genero;
    std::string sociable;
    std::string nado;


};

#endif //CRISTIAN_PROGRAMAS_NUTRIA_H
