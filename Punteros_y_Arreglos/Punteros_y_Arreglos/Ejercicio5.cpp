//
//  Ejercicio5.cpp
//  Punteros_y_Arreglos
//
//  Created by carlos andrade guzman on 5/15/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).
#include <iostream>
using namespace std;

int longitud(char *s1){
    int len = 0;
    while (*s1 != '\0'){        //Mientras no sea el final de la cadena.
        len++;s1++;             //Cadena s2 recibira valor de s1 por iteracion.
        
    }
    return len;
}
void conc(char *s1, char *s2){
    int n = longitud(s2);
    while (*s1 != '\0'){            //Mientras no sea el final de la cadena.
        s2[n] = *s1;s1++;s2++;      //Empieza a concatenar.
        
    }
}

void copiar (char *s1, char *s2) //Creamos la Funcion con 2 entradas con Punteros, para poder modificar sus valores.
{
    while (*s1 != '\0'){ //Mientras no sea el final de la cadena.
     *s2=*s1; s2++; s1++; //Cadena s2 recibira valor de s1 por iteracion.
    }
}

int main(){
    char a[50];
    char b[50];
    cout<<"Escriba la cadena a: "<<endl;cin>>a;
    cout<<"Escriba la cadena b: "<<endl;cin>>b;
    conc(a, b);
    cout<<"La cadena concatenada es: "<<b<<endl;
}
//HECHO!!


//void most(char *s1){
//    while (*s1 != '\0'){
//        cout<<*s1<<endl;
//        s1++;
//    }
//}
