//
// Created by crist on 30/04/2024.
//

#ifndef CRISTIAN_PROGRAMAS_OSOPOLAR_H
#define CRISTIAN_PROGRAMAS_OSOPOLAR_H

#include "Animal.h"

class OsoPolar: public Animal{
public:
    OsoPolar();
    OsoPolar(OsoPolar &rhs);
    OsoPolar(std::string nombre, float peso, int edad, float altura, std::string genero, std::string clima, std::string pelaje);
    ~OsoPolar();

    void makeSound() override;

private:
    std::string nombre;
    float peso;
    int edad;
    float altura;
    std::string genero;
    std::string clima;
    std::string pelaje;


};


#endif //CRISTIAN_PROGRAMAS_OSOPOLAR_H
