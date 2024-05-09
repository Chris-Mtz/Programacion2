//
// Created by crist on 30/04/2024.
//

#ifndef CRISTIAN_PROGRAMAS_DELFIN_H
#define CRISTIAN_PROGRAMAS_DELFIN_H

#include "Animal.h"

class Delfin: public Animal{
public:
    Delfin();
    Delfin(Delfin &rhs);
    Delfin(std::string nombre, float peso, int edad, float altura, std::string genero, std::string inteligencia, std::string habilidad);
    ~Delfin();

    void makeSound() override;

private:
    std::string nombre;
    float peso;
    int edad;
    float altura;
    std::string genero;
    std::string inteligencia;
    std::string habilidad;
};

#endif //CRISTIAN_PROGRAMAS_DELFIN_H
