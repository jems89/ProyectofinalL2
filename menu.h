#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

class Menu{     /// entidades funaciones locales ///atributos
private:
    int recuadro();
    char titulo_Principal[40];
    char titulo_1[20];
    char titulo_2[20];
    char titulo_3[20];
    int imagen();
public:
                          // funciones globaless son las que que antes era funciones solamentes//comportamientos
    void mostar(char );
    void guardar_seleccion(char );/// metodo que permite seleccionar

};
Menu::mostar(char){

cout<<"ädios";

}


#endif // MENU_H_INCLUDED
