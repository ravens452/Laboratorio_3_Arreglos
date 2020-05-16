//
//  Ejercicio2.cpp
//  Punteros_y_Arreglos
//
//  Created by carlos andrade guzman on 5/15/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//

//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva)

#include <iostream>
using namespace std;

void cambio(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rev(int arreglo[], int n){
    int *s1 = arreglo, //Apunta al comienzo del arreglo
        *s2 = arreglo + n - 1; //Apunta al final del arreglo.
    while (s1 < s2) {
        cambio(s1, s2);
        s1++;
        s2--;
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
    rev(arreglo, tam);
    most(arreglo);
}
