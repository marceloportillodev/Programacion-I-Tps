/*
Realice un programa que permita sumar los números enteros que se encuentran entre dos valores 
enteros que se ingresan por teclado. Ejemplo: Si se ingresan los valores 23 y 28, deberá
 devolver la suma 23+24+25+26+27+28. Algo importante es que el primer valor ingresado debe ser 
 menor que el segundo valor ingresado para hacer la suma. Utilizar lenguaje C.
*/

#include <stdio.h>

int main(void){
    int a;
    int b;

    do
    {
        printf("Ingrese un valor para A: ");
        scanf("%d",&a);

        printf("Ingrese un valor para B: ");
        scanf("%d",&b);    

        if (a>b)
        {
            printf("A tiene que se menor que B\n");
        }
        
    } while (a>b);

    int diferencia = b - a;
    int total;
    int suma= 0;

    for (int i = 0; i <= diferencia; i++)
    {
            total = a + i;
            suma = suma + total;
            if (i != diferencia)
            {
                printf("%d + ", total);    
            }else{
                printf("%d ", total);    
            }
    }

    printf("\nResultado: %d", suma);
}
