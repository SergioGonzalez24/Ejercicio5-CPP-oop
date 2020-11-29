//
//  main.cpp
//  Alumno
//
//  Created by Sergio Gonzalez and German Guzman
//

#include <iostream>
#include "Alumno.h"

using std::cout;
using std::endl;

int main() {

    Alumno alumno1,alumno2,alumno3;

    alumno1.setMatricula("A01745446");
    alumno1.setNombre("Sergio");
    alumno1.setEdad(19);
    alumno1.setCarrera("ITC");
    alumno1.setGrupo("303");

    alumno2.setMatricula("A01752165");
    alumno2.setNombre("Germán Guzmán");
    alumno2.setEdad(19);
    alumno2.setCarrera("ITC");
    alumno2.setGrupo("303");

    alumno3.setMatricula("A000000");
    alumno3.setNombre("Valentin Elizalde");
    alumno3.setEdad(26);
    alumno3.setCarrera("ITC");
    alumno3.setGrupo("303");


    cout<<"Datos de Alumnos\n"<<endl;

    cout << "Alumno 1: " << alumno1.getNombre() << "\n" << "Matricula: " << alumno1.getMatricula() << "\n"
    << "Carrera: " << alumno1.getCarrera() << "\n" << "Edad: " << alumno1.getEdad() << "\n" << "Grupo: " << alumno1.getGrupo() << "\n" << endl;
    
    cout << "Alumno 2: " << alumno2.getNombre() << "\n" << "Matricula: " << alumno2.getMatricula() << "\n"
    << "Carrera: " << alumno2.getCarrera() << "\n" << "Edad: " << alumno2.getEdad() << "\n" << "Grupo: " << alumno2.getGrupo() << "\n" << endl;
    
    alumno3.imprimeAlmno();
    cout<<"\n";
    alumno3.cumpleanios();
    cout<<"\n";
    
    
    

    return 0;

}
