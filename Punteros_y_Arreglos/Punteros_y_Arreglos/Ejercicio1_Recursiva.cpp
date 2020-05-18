//
//  Ejercicio1_Recursiva.cpp
//  Punteros_y_Arreglos
//
//  Created by carlos andrade guzman on 5/15/20.
//  Copyright © 2020 carlos andrade guzman. All rights reserved.
//


//Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo(recursiva).

#include <iostream>
using namespace std;

int suma_recursiva(int *a, int t){  //recursiva
    if(t==0){
       return 0;
    }
    return *a + suma_recursiva(++a,--t); //++a incrementa antes de la llamada recursiva
}

int main()
{
    // Array to hold the values
    int array[] = { 2, 4, 6, 5, 8, 1 };

    cout<<suma_recursiva(array, 6);
    return 0;
}
