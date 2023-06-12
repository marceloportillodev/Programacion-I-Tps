/*
Realizar una función recursiva que permita calcular la suma de los valores mayores a 10 de un vector de enteros de 40 posiciones. 
*/
#include <stdio.h>

int sumamayores(int t, int a, int x[]){
    if ( a >= 40)
    {
        printf("\n La suma de los numeros mayores a 10 del vector da:%d",t);
        return 1;
    }else{

       if (x[a]>10)
       {
        t= t +x[a];
       }
       
        a++;        
        sumamayores(t,a,x);
    }
}

int main(void){
    int contador=0;
    int total= 0;
    char respuesta;

    int vector[40]= { 1,32,4,6,1,9,3,2,1,4,
                      3,54,7,1,8,3,6,1,1,9,
                      4,43,6,3,1,9,2,8,4,1,
                      9,38,7,7,3,7,8,7,8,8 };
    sumamayores(total, contador, vector);
}