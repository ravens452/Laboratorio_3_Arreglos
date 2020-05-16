//
//  Ejercicio4.cpp
//  Punteros_y_Arreglos
//
//  Created by carlos andrade guzman on 5/15/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
#include <iostream>
using namespace std;

int longitud(char *s1){
    int len = 0;
    while (*s1 != '\0'){        //Mientras no sea el final de la cadena.
        len++;s1++;             //Cadena s2 recibira valor de s1 por iteracion.
        
    }
    return len;
}
int main(){
    char a[50];
    cout<<"Escriba la cadena a: "<<endl;cin>>a;
    cout<<"La longitud de la cadena es: "<<longitud(a)<<endl;

}
