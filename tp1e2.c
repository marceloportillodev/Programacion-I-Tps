
/*Se desea hacer el siguiente cálculo: (k-n)*y/(3-r), donde k, n, r e y son enteros (int) 
que se ingresan por teclado. Se debe utilizar una función para realizar el cálculo. 
El resultado (float) debe imprimirse en pantalla desde el programa principal (main). 
Considerar que k debe ser mayor que n para poder hacer el cálculo y que r debe ser distinto 
de 3. Utilizar lenguaje C.*/
#include <stdio.h>

int main(void){
float resultado;
int k;
int n;
int y;
int r;

do
{
    printf("ingrese un valor para K: ");
    scanf("%d", &k);
    printf("ingrese un valor para N:  ");
    scanf("%d", &n);
    printf("ingrese un valor para R:  ");
    scanf("%d", &r); 
    printf("ingrese un valor para Y:  ");
    scanf("%d", &y);    
    if (k<n)
    {
        printf("K tiene que ser mayor que N\n");
    }
    if (r == 3)
    {
        printf("R no debe ser igual a 3\n");
    }     
    
} while (k < n && r == 3);

resultado = (k-n)*y/(3-r);
printf("El resultado es:%f", resultado);
}