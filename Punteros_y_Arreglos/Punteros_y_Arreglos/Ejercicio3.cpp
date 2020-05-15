//
//  Ejercicio3.cpp
//  Punteros_y_Arreglos
//
//  Created by carlos andrade guzman on 5/15/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//
//Implementar una función que ordene los elementos de un arreglo: ascendente.

#include <iostream>
using namespace std;

//resolvemos usando punteros:


void ordenar(int* array, int n)   //Entrada del array y el tamaño
{
    int i, j, t;

    for (int i = 0; i < n; i++) { //Ordenamos usando comparacion de dos en dos usando punteros.
        for (j = i + 1; j < n; j++) {
            if (*(array + j) < *(array + i)) {

                t = *(array + i); //usamos auxiliar t
                *(array + i) = *(array + j);
                *(array + j) = t;
            }
        }
    }
    
    for (i = 0; i < n; i++) //Imrpimiendo los resultados
        cout<<*(array + i)<<" ";
}


int main(){
    int arreglo[] = {3,1,8,4,5,9,7};
    int tam = 7;
    ordenar(arreglo, tam);
    
}
