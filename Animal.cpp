//
// Created by crist on 30/04/2024.
//

#include "Animal.h"
#include <iostream>

Animal::Animal() {
    nombre = "NoNombre";
    peso = 0.0f;
    edad = 0;
    altura = 0.0;

}

Animal::Animal(Animal &rhs){
    nombre = rhs.nombre;
    peso = rhs.peso;
    edad = rhs.edad;
    altura = rhs.altura;
    genero = rhs.genero;
}

Animal::Animal(std::string nombre, float peso, int edad, float altura, std::string genero){
this->nombre = nombre;
this->peso = peso;
this->edad = edad;
this->altura = altura;
this->genero = genero;

}

Animal::~Animal(){

}

void Animal::makeSound() {
    std::cout << "Animal sonido" << std::endl;

}