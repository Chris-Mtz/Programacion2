//
// Created by crist on 30/04/2024.
//

#ifndef CRISTIAN_PROGRAMAS_CEBRA_H
#define CRISTIAN_PROGRAMAS_CEBRA_H

#include "Animal.h"

class Cebra: public Animal{
public:
    Cebra();
    Cebra(Cebra &rhs);
    Cebra(std::string nombre, float peso, int edad, float altura, std::string patron, std::string velocidad);
    ~Cebra();

    void makeSound() override;

private:
    std::string nombre;
    float peso;
    int edad;
    float altura;
    std::string patron;
    std::string velocidad;
};

#endif //CRISTIAN_PROGRAMAS_CEBRA_H
