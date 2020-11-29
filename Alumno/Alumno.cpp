//
//  Alumno.cpp
//  Alumno
//
//  Created by Sergio Gonzalez and German Guzman
//

#include "Alumno.h"
#include <iostream>

Alumno::Alumno() {

    nombre="No name";
    matricula="No ID";
    edad= 0;
    carrera="N/A";
	grupo="N/A";
}

Alumno::Alumno(string matricula,string nombre,int edad,string carrera, string grupo) {

    this->matricula=matricula;
    this->nombre=nombre;
    this->edad=edad;
    this->carrera=carrera;
    this->grupo=grupo;
}

void Alumno::setMatricula(string matricula) {
    this->matricula=matricula;
}

void Alumno::setNombre(string nombre) {
    this->nombre=nombre;
}

void Alumno::setEdad(int edad) {
	
	if (edad>0) { this->edad=edad; }
}

void Alumno::setCarrera(string carrera) {
    this->carrera=carrera;
}

void Alumno::setGrupo(string grupo) {
    this->grupo=grupo;
}

void Alumno::imprimeAlmno() {
	
	std::cout<<"Nombre: "<<nombre<<std::endl;
	std::cout<<"Matricula: "<<matricula<<std::endl;
	std::cout<<"Carrera: "<<carrera<<std::endl;
	std::cout<<"Edad: "<<edad<<std::endl;
	std::cout<<"Grupo: "<<grupo<<std::endl;
	std::cout<<"\n";
	
}

void Alumno::cumpleanios() {
	edad+=1;
	std::cout<<edad<<std::endl;
}
