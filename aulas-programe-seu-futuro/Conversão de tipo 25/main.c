/******************************************************************************
Aula 25
Conversão de tipo ou casting

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20, c = 0;
    float pi = 3.1415;
    
    c = (int)pi;//Deve-se tomar cuidado ao converter numero float para int pois ele perderá 
    //os dados depois da virgula.
    
    printf("Valor de a: %d\n", c);
    printf("\nSoma: %d", a + b);
    printf("\nSubtração: %d", a - b);
    printf("\nMultiplicação: %d", a * b);
    printf("\nDivisão: %f", (float)a / b);/*Conversão de tipo int para float
    
    */

    return 0;
}
