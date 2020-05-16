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


void invertir (int *array, int n) //Creamos la Funcion con 2 entradas con Punteros, para poder modificar sus valores.
{
    int arreglo2[n];
    int pun=0;
    while(n>0){
        arreglo2[pun] = *(arreglo2+n-1);
        n-=1;
        pun++;
        cout<<arreglo2[pun];
    }

//    for (int j=n-1; j==0; j--) {
//        int punto = 0;
//        arreglo2[punto] = *(array+j);
//            cout<<"hola"<<endl;
//
//    }
    for (int j = 0; j < n; j++) //Imrpimiendo los resultados
    {
        cout<<*(arreglo2 + j)<<" ";
        
    }
  
    
}

int main(){
    int arreglo[] = {3,1,8,4,5,9,7};
    int tam = 7;
    invertir(arreglo, tam);
    
}
