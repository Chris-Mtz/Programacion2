//
// Created by crist on 30/04/2024.
//
#include "Cebra.h"
#include <iostream>
#include <string>

Cebra::Cebra() {
    nombre = "Rayas";
    peso = 300.0f;
    edad = 5;
    altura = 150.0;
    patron = "Rayado";
    velocidad = "Rapido";
}

Cebra::Cebra(Cebra &rhs){
    nombre = rhs.nombre;
    peso = rhs.peso;
    edad = rhs.edad;
    altura = rhs.altura;
    patron = rhs.patron;
    velocidad = rhs.velocidad;
}

Cebra::Cebra(std::string nombre, float peso, int edad, float altura, std::string patron, std::string velocidad){
    this->nombre = nombre;
    this->peso = peso;
    this->edad = edad;
    this->altura = altura;
    this->patron = patron;
    this->velocidad = velocidad;
}

Cebra::~Cebra() {
}

void Cebra::makeSound(){
    std::cout << "Animal: Cebra" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Edad: " << edad << " anios" << std::endl;
    std::cout << "Altura: " << altura << " cm" << std::endl;
    std::cout << "Patron: " << patron << std::endl;
    std::cout << "Velocidad: " << velocidad << std::endl;
    std::cout << "Sonido: Hi-hi-hi-hi-hi" << std::endl;
}