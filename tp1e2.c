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