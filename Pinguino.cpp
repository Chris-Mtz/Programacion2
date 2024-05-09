//
// Created by crist on 30/04/2024.
//
#include "Pinguino.h"
#include <iostream>
#include <string>

Pinguino::Pinguino() {
    nombre = "Pingu";
    peso = 20.0f;
    edad = 10;
    altura = 60.0;
    genero = "Macho";
    especie = "Emperor";
    reproduccion = "Ovipara";
}

Pinguino::Pinguino(Pinguino &rhs){
    nombre = rhs.nombre;
    peso = rhs.peso;
    edad = rhs.edad;
    altura = rhs.altura;
    genero = rhs.genero;
    especie = rhs.especie;
    reproduccion = rhs.reproduccion;
}

Pinguino::Pinguino(std::string nombre, float peso, int edad, float altura, std::string genero, std::string especie, std::string reproduccion){
    this->nombre = nombre;
    this->peso = peso;
    this->edad = edad;
    this->altura = altura;
    this->genero = genero;
    this->especie = especie;
    this->reproduccion = reproduccion;
}

Pinguino::~Pinguino() {
}

void Pinguino::makeSound(){
    std::cout << "Animal: Pinguino" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Edad: " << edad << " anios" << std::endl;
    std::cout << "Altura: " << altura << " cm" << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Especie: " << especie << std::endl;
    std::cout << "Reproduccion: " << reproduccion << std::endl;
    std::cout << "Sonido: Arrr arrr arrr" << std::endl;
}