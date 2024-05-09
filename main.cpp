#include <iostream>
#include <string>
//#include "Coche.h"


//#include "../Ninja/ninjaSupremo.h"
//#include <iostream>

//int main() {

    //ninjaSupremo ninja1{};
    //ninjaSupremo ninja2("Naruto Uzumaki", "Masculino", 17, 1.74f, 50.9f,
                        //"Alto", "Muy rapidos", "Extremo",
                        //"Perfecto", "Muy alto", "Superior");


    //std::cout << "Nombre: " << ninja2.getNombre() << std::endl;
    //std::cout << "Edad: " << ninja2.getEdad() << " anios" << std::endl;
    //std::cout << "Estatura: " << ninja2.getEstatura() << " m" << std::endl;
    //std::cout << "Peso: " << ninja2.getPeso() << " kg" << std::endl;
    //std::cout << "Genero: " << ninja2.getGenero() << std::endl;

    //std::cout << "Aumento de Poder en Modo Sabio: " << ninja2.getAumentoPoder() << std::endl;
    //std::cout << "Reflejos en Modo Sabio: " << ninja2.getReflejos() << std::endl;
    //std::cout << "Mejora de Ninjutsu en Modo Sabio: " << ninja2.getMejoraNinjutsu() << std::endl;

    //std::cout << "Control de Biju: " << ninja2.getControlBiju() << std::endl;
    //std::cout << "Aumento de Chakra por Biju: " << ninja2.getAumentoChakra() << std::endl;
    //std::cout << "Curacion Mejorada por Biju: " << ninja2.getCuracionMejorada() << std::endl;

    //return 0;
//}


//int main() {

   //Coche c1{};
   //Coche c2("Ford", "1250", 2017, "Azul", 1080.53453, "Cristian");
    //Coche c3(c2);

    //Vacio
    //c1.Imprimir();

    //Datos
    //c2.Imprimir();

    //Copia
    //c3.Imprimir();


//}

#include <iostream>
#include "Animal.h"
#include "Cebra.h"
#include "Delfin.h"
#include "Flamenco.h"
#include "Lobo.h"
#include "Nutria.h"
#include "OsoPolar.h"
#include "Pinguino.h"

int main() {
    
    Animal *cebra = new Cebra();
    Animal *delfin = new Delfin();
    Animal *flamenco = new Flamenco();
    Animal *lobo = new Lobo();
    Animal *nutria = new Nutria();
    Animal *osoPolar = new OsoPolar();
    Animal *pinguino = new Pinguino();

    
    std::cout << "Sonidos de los animales:" << std::endl;
    std::cout << "" << std::endl;
    cebra->makeSound();
    std::cout << "" << std::endl;
    delfin->makeSound();
    std::cout << "" << std::endl;
    flamenco->makeSound();
    std::cout << "" << std::endl;
    lobo->makeSound();
    std::cout << "" << std::endl;
    nutria->makeSound();
    std::cout << "" << std::endl;
    osoPolar->makeSound();
    std::cout << "" << std::endl;
    pinguino->makeSound();

    
    delete cebra;
    delete delfin;
    delete flamenco;
    delete lobo;
    delete nutria;
    delete osoPolar;
    delete pinguino;

    return 0;
}
