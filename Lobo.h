//
// Created by crist on 30/04/2024.
//

#ifndef CRISTIAN_PROGRAMAS_LOBO_H
#define CRISTIAN_PROGRAMAS_LOBO_H

#include "Animal.h"

class Lobo: public Animal{
public:
    Lobo();
    Lobo(Lobo &rhs);
    Lobo(std::string nombre, float peso, int edad, float altura, std::string genero, std::string instinto, std::string vinculo);
    ~Lobo();

    void makeSound() override;

private:
    std::string nombre;
    float peso;
    int edad;
    float altura;
    std::string genero;
    std::string instinto;
    std::string vinculo;


};


#endif //CRISTIAN_PROGRAMAS_LOBO_H
