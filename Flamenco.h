//
// Created by crist on 30/04/2024.
//

#ifndef CRISTIAN_PROGRAMAS_FLAMENCO_H
#define CRISTIAN_PROGRAMAS_FLAMENCO_H

#include "Animal.h"

class Flamenco: public Animal{
public:
    Flamenco();
    Flamenco(Flamenco &rhs);
    Flamenco(std::string nombre, float peso, int edad, float altura, std::string genero, std::string plumaje, std::string patas);
    ~Flamenco();

    void makeSound() override;

private:
    std::string nombre;
    float peso;
    int edad;
    float altura;
    std::string genero;
    std::string plumaje;
    std::string patas;
};

#endif //CRISTIAN_PROGRAMAS_FLAMENCO_H
