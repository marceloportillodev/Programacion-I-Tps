/*
Dado un archivo de enteros que ya tiene cargado valores, se desea leer el archivo 
hasta el final e indicar la cantidad de valores iguales a 12 o 15 que tiene el mismo. 
Luego imprimir esas cantidades en la pantalla.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

char cadena[100];
char numeros[10][10];
int quince=0;
int doce=0;
int aux=0;

FILE *fp;
fp = fopen("archivo.txt","r");

if(fp == NULL){
    exit(1);
}else{

    while (fgets(cadena,100,fp))
    {
        strtok(cadena,"\n");
        memcpy(numeros[aux], cadena  ,100 );
        aux++;
    }
    fclose(fp);

    for (size_t i = 0; i <10; i++)
        {
            //printf("\n  n: %s", numeros[i]);
            if (strcmp(numeros[i],"15")== 0)
            {
                quince++;
            }
            if (strcmp(numeros[i],"12")== 0)
            {
                doce++;
            }          
        }
}        

printf("\nHay %d valores iguales a 15", quince);
printf("\nHay %d valores iguales a 12", doce);

return 0;

}