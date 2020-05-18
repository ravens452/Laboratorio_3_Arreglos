//
//  Ejercicio4_Recursiva.cpp
//  Punteros_y_Arreglos
//
//  Created by carlos andrade guzman on 5/15/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//
//Implemente una función que reciba una cadena y retorne su tamaño. (recursiva)
#include <iostream>
using namespace std;

int longitudArray(char *s1)
{
    int n=0;
    while (*s1 != '\0') {
        n++;longitudArray(++s1);
    }
    return n;
}
int main(){
   char cadena[30];
   cout<<"¿Cuál es la cadena? "<<endl;
   cin>>cadena;
   cout<<"La cadena tiene "<<longitudArray(cadena)<<" letras"<<endl;
}
