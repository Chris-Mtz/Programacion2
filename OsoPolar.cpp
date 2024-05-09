//
// Created by crist on 30/04/2024.
//
#include "OsoPolar.h"
#include <iostream>
#include <string>

OsoPolar::OsoPolar() {
    nombre = "Nieve";
    peso = 450.0f;
    edad = 20;
    altura = 200.0;
    genero = "Macho";
    clima = "Frio";
    pelaje = "Grueso";

}

OsoPolar::OsoPolar(OsoPolar &rhs){
    nombre = rhs.nombre;
    peso = rhs.peso;
    edad = rhs.edad;
    altura = rhs.altura;
    genero = rhs.genero;
    clima = rhs.clima;
    pelaje = rhs.pelaje;

}

OsoPolar::OsoPolar(std::string nombre, float peso, int edad, float altura, std::string genero, std::string clima, std::string pelaje){
    this->nombre = nombre;
    this->peso = peso;
    this->edad = edad;
    this->altura = altura;
    this->genero = genero;
    this->clima = clima;
    this->pelaje = pelaje;

}

OsoPolar::~OsoPolar() {

}

void OsoPolar::makeSound(){
    std::cout << "Animal: Oso Polar" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Edad: " << edad << " anios" << std::endl;
    std::cout << "Altura: " << altura << " cm" << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Clima: " << clima << std::endl;
    std::cout << "Pelaje: " << pelaje << std::endl;
    std::cout << "Sonido: Grroooaaarrrr" << std::endl;
}