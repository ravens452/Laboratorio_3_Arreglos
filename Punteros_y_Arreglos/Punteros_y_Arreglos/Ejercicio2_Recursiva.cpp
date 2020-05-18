//
//  Ejercicio2_Recursiva.cpp
//  Punteros_y_Arreglos
//
//  Created by carlos andrade guzman on 5/15/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implementar una función que invierta los elementos de un arreglo de enteros (recursiva).
#include <iostream>
using namespace std;

void cambio(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void invertir(int *a,int *u){
    if(a<u){
        cambio(a,u);
        invertir(a+1,u-1);
    }
}
int main(){

    int array[] = {1,2,3,4,5,6,7};
    int tam = 7;
    int *a = array;
    int *u = array+tam-1;
    invertir(a,u);
    
    for (int i=0; i<tam; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}
