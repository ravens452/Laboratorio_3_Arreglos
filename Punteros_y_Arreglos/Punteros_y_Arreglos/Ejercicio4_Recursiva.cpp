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


//int longitudArray(char A[])
//{
//    int acum =0;
//    int i;
//    if (A[acum] == '\0'){
//        return 0;
//    }else{
//        while (i<=0) {
//            longitudArray(A[0+i]);
//            acum++;
//        }
//    }
//    return acum;
//}
//int haveSameElems(int Arr1[], int size)
//{
//  ///pick an element from arr1, if it appears in arr2 cut both out using shiftback
//  ///if it doesn't appear rerturn false, false should go thorugh all levels till the end
//  //end: if true check last two elements, if false return false....................................................................................
//    int suma = 0;
//  if (size==0)return 0;
//  else{
//    haveSameElems(Arr1, size - 1);
//      cout<<""
//      return suma;
////    return (lsearchandshift(Arr2, size, Arr1[size - 1]));//if the last element from Arr1 is \
//in Arr2 this will be true
//  }
//}
int longitudArray(char *s1)
{
    int n=0;
    while (*s1 != '\0') {
        n++;s1++;longitudArray(s1);
    }
    return n;
}
int main(){

   char cadena[30];
   cout<<"¿Cuál es la cadena? "<<endl;
   cin>>cadena;
   cout<<"La cadena tiene "<<longitudArray(cadena)<<" letras"<<endl;
}
