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

void ordenar(int *s1, int n){
    int i,j,aux;
    for (i=0; i<n-1; i++)
        for (j=i+1; j<n; j++)
            if (s1[i]>s1[j]){
                aux=s1[i]; s1[i]=s1[j]; s1[j]=aux;
            }
}

void most(int *s1){
    while (*s1 != '\0'){
        cout<<*s1<<" ";
        s1++;
    }
}
int main(){
    int arreglo[] = {3,1,8,4,5,9,7};
    int tam = 7;
    ordenar(arreglo, tam);
    most(arreglo);
}
