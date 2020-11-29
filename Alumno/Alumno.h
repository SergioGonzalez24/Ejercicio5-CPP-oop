//
//  Alumno.h
//  Alumno
//
//  Created by Sergio Gonzalez and German Guzman
//
#include <string>
#ifndef Alumno_h
#define Alumno_h

using std::string;

class Alumno {

private:
    
    string matricula;
    string nombre;
    int edad;
    string carrera;
    string grupo;
    
public:
    
//    Constructores
    Alumno();
    Alumno(string matricula,string nombre,int edad, string carrera, string grupo);
    
//    Metodos Set
    void setMatricula(string matricula);
    void setNombre(string nombre);
    void setEdad(int edad);
    void setCarrera(string carrera);
    void setGrupo(string grupo);
    
//    Metodos Get
    string getMatricula() {return matricula;}
    string getNombre() {return nombre;}
    int getEdad() {return edad;}
    string getCarrera() {return carrera;}
    string getGrupo () {return grupo;}

//    Otros
    void imprimeAlmno();
    void cumpleanios();
};

#endif /* Alumno_h */
