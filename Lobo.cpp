//
// Created by crist on 30/04/2024.
//
#include "Lobo.h"
#include <iostream>
#include <string>

Lobo::Lobo() {
    nombre = "Wolfy";
    peso = 45.0f;
    edad = 7;
    altura = 120.0;
    genero = "Macho";
    instinto = "cazador";
    vinculo = "manada";

}

Lobo::Lobo(Lobo &rhs){
    nombre = rhs.nombre;
    peso = rhs.peso;
    edad = rhs.edad;
    altura = rhs.altura;
    genero = rhs.genero;
    instinto = rhs.instinto;
    vinculo = rhs.vinculo;

}

Lobo::Lobo(std::string nombre, float peso, int edad, float altura, std::string genero, std::string instinto, std::string vinculo){
    this->nombre = nombre;
    this->peso = peso;
    this->edad = edad;
    this->altura = altura;
    this->genero = genero;
    this->instinto = instinto;
    this->vinculo = vinculo;

}

Lobo::~Lobo() {

}

void Lobo::makeSound(){
    std::cout << "Animal: Lobo" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Edad: " << edad << " anios" << std::endl;
    std::cout << "Altura: " << altura << " cm" << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Instinto: " << instinto << std::endl;
    std::cout << "Vinculo: " << vinculo << std::endl;
    std::cout << "Sonido: Auuu" << std::endl;
}