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

int suma(int* array, int n)   //Entrada del array y el tamaño
{
    
    int sumaArray=0;
    for (int i = 0; i < n; i++) {
        sumaArray += *(array+i);}
    
    return sumaArray;
        
    }
int main(){
    int arreglo[] = {3,1,8,4,5,1,7};
    int tam = 7;
    cout<<suma(arreglo, tam)<<endl;
    
}
