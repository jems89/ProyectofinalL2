#ifndef EXAMEN_H_INCLUDED
#define EXAMEN_H_INCLUDED
#include "fecha.h"

class Examen{
    private:
    int legajo;
    float nota;
    Fecha fechaPersona;

    public:
        Persona();
        Persona(Fecha);
        Persona(int, int, int);
        void .....(int);
        void set...(float);
        void setFecha(Fecha);
        int getL..();
        float getNo.a();
        Fecha getFe.a();
        void cargar();
        void mostrar();
};

#endif // EXAMEN_H_INCLUDED
