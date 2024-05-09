//
// Created by crist on 30/04/2024.
//

#ifndef CRISTIAN_PROGRAMAS_PINGUINO_H
#define CRISTIAN_PROGRAMAS_PINGUINO_H

#include "Animal.h"

class Pinguino: public Animal{
public:
    Pinguino();
    Pinguino(Pinguino &rhs);
    Pinguino(std::string nombre, float peso, int edad, float altura, std::string genero, std::string especie, std::string reproduccion);
    ~Pinguino();

    void makeSound() override;

private:
    std::string nombre;
    float peso;
    int edad;
    float altura;
    std::string genero;
    std::string especie;
    std::string reproduccion;
};

#endif //CRISTIAN_PROGRAMAS_PINGUINO_H
