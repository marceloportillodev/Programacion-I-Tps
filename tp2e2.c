/*
Generar un subprograma que permita, dado un vector de 100 posiciones, obtener el promedio de los elementos pares 
del mismo (no de las posiciones pares, sino de los valores pares que tiene cargado en cada posición). Los valores
 del vector son float. Guardar el resultado del promedio en un archivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>

int main(void){

float vector[100]={1.00,2.00,5.60,45.00,89.00,80.00,10.00,44.00,66.00,23.00,
                   44.22,43.34,82.12,22.55,01.21,77.33,23.87,12.46,75.21,63.11,
                   14.52,43.34,82.12,22.40,01.21,24.22,23.87,12.46,75.21,63.11,
                   41.12,16.34,82.12,2.00,01.21,69.77,22.67,66.26,75.21,52.22,
                   24.22,46.34,62.12,2.55,21.22,70.49,11.27,12.26,75.21,16.350,
                   49.27,91.34,27.12,11.55,11.21,21.22,43.17,32.48,75.21,22.40,
                   84.11,22.34,11.32,12.55,61.16,42.36,83.77,28.61,46.0,76.52,
                   52.26,66.34,22.12,62.55,26.41,88.63,43.8,15.24,75.21,28.66,
                   45.22,28.34,42.12,82.10,22.67,22.32,23.27,42.76,75.21,81.77,
                   12.72,71.34,82.12,42.55,01.18,45.23,63.97,22.00,75.21,163.92
                   };

float suma = 0.00;
int cant = 0;
float promedio;
int aux;
                
for (size_t i = 0; i < 100; i++)
{
    aux = vector[i] * 100;

    if(aux % 2 == 0)
    {
        printf("\n %.2f  es par", vector[i]);
        suma = suma + vector[i];
        cant++;
    }else{
        printf("\n %.2f  es impar", vector[i]);
    }

}
promedio = suma / cant;
char texto[] = "";

sprintf(texto, "%g", promedio);

printf("\n La suma de los pares da: %.2f", suma);
printf("\n El promedio es: %.2f", promedio);

FILE *fp;
fp = fopen ( "resultado.txt", "w");
fputs(texto, fp);        
fclose(fp);

}