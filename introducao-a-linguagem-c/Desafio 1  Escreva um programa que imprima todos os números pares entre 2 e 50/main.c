/******************************************************************************
1) Escreva um programa que imprima todos os números pares entre 2 e 50.
Para saber se o número é par, basta você ver se o resto da divisão do nú-
mero por 2 é igual a 0.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    
    printf("Estes são os numeros pares que estão no intervalo entre 2 e 50:\n");
    for(i = 2; i < 50; i++)
        if(i % 2 == 0)
            printf(" %d, ", i );
    
    

    return 0;
}
