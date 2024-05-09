//
// Created by crist on 30/04/2024.
//
#include "Nutria.h"
#include <iostream>
#include <string>

Nutria::Nutria() {
    nombre = "Marina";
    peso = 5.0f;
    edad = 13;
    altura = 45.0;
    genero = "Hembra";
    sociable = "Mucho";
    nado = "Agil";

}

Nutria::Nutria(Nutria &rhs){
    nombre = rhs.nombre;
    peso = rhs.peso;
    edad = rhs.edad;
    altura = rhs.altura;
    genero = rhs.genero;
    sociable = rhs.sociable;
    nado = rhs.nado;

}

Nutria::Nutria(std::string nombre, float peso, int edad, float altura, std::string genero, std::string sociable, std::string nado){
    this->nombre = nombre;
    this->peso = peso;
    this->edad = edad;
    this->altura = altura;
    this->genero = genero;
    this->sociable = sociable;
    this->nado = nado;

}

Nutria::~Nutria() {

}

void Nutria::makeSound(){
    std::cout << "Animal: Nutria" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Edad: " << edad << " anios" << std::endl;
    std::cout << "Altura: " << altura << " cm" << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Sociable: " << sociable << std::endl;
    std::cout << "Nado: " << nado << std::endl;
    std::cout << "Sonido: Chirp chirp chirp" << std::endl;
}