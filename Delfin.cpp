//
// Created by crist on 30/04/2024.
//
#include "Delfin.h"
#include <iostream>
#include <string>

Delfin::Delfin() {
    nombre = "Coral";
    peso = 200.0f;
    edad = 15;
    altura = 180.0;
    genero = "Hembra";
    inteligencia = "Alta";
    habilidad = "Ecolocalizacion";
}

Delfin::Delfin(Delfin &rhs){
    nombre = rhs.nombre;
    peso = rhs.peso;
    edad = rhs.edad;
    altura = rhs.altura;
    genero = rhs.genero;
    inteligencia = rhs.inteligencia;
    habilidad = rhs.habilidad;
}

Delfin::Delfin(std::string nombre, float peso, int edad, float altura, std::string genero, std::string inteligencia, std::string habilidad){
    this->nombre = nombre;
    this->peso = peso;
    this->edad = edad;
    this->altura = altura;
    this->genero = genero;
    this->inteligencia = inteligencia;
    this->habilidad = habilidad;
}

Delfin::~Delfin() {
}

void Delfin::makeSound(){    std::cout << "Animal: Delfin" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Edad: " << edad << " anios" << std::endl;
    std::cout << "Altura: " << altura << " cm" << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Inteligencia: " << inteligencia << std::endl;
    std::cout << "Habilidad: " << habilidad << std::endl;
    std::cout << "Sonido: Eeee eeee eeee" << std::endl;
}