//
// Created by crist on 30/04/2024.
//
#include "Flamenco.h"
#include <iostream>
#include <string>

Flamenco::Flamenco() {
    nombre = "Flavio";
    peso = 4.0f;
    edad = 22;
    altura = 130.0;
    genero = "Macho";
    plumaje = "Rosa/Anaranjado";
    patas = "Palmeadas";
}

Flamenco::Flamenco(Flamenco &rhs){
    nombre = rhs.nombre;
    peso = rhs.peso;
    edad = rhs.edad;
    altura = rhs.altura;
    genero = rhs.genero;
    plumaje = rhs.plumaje;
    patas = rhs.patas;
}

Flamenco::Flamenco(std::string nombre, float peso, int edad, float altura, std::string genero, std::string plumaje, std::string patas){
    this->nombre = nombre;
    this->peso = peso;
    this->edad = edad;
    this->altura = altura;
    this->genero = genero;
    this->plumaje = plumaje;
    this->patas = patas;
}

Flamenco::~Flamenco() {
}

void Flamenco::makeSound(){
    std::cout << "Animal: Flamenco" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Edad: " << edad << " anios" << std::endl;
    std::cout << "Altura: " << altura << " cm" << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Plumaje: " << plumaje << std::endl;
    std::cout << "Patas: " << patas << std::endl;
    std::cout << "Sonido: Honk honk honk" << std::endl;
}
