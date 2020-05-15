//
//  Ejercicio1.cpp
//  Punteros_y_Arreglos
//
//  Created by carlos andrade guzman on 5/15/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
//(Iterativa y recursiva).

#include <iostream>
using namespace std;


void copiar (char *s1, char *s2) //Creamos la Funcion con 2 entradas con Punteros, para poder modificar sus valores.
{
    while (*s1!='\0'){ //Mientras no sea el final de la cadena.
     *s2=*s1; s2++; s1++; //Cadena s2 recibira valor de s1 por iteracion.
    }
}


int c = 0;
int main(){
    char a[50];
    char b[50];
    cout<<"Escriba la cadena a: "<<endl;cin>>a;
    copiar(a, b);
    cout<<b<<endl;
    
}
