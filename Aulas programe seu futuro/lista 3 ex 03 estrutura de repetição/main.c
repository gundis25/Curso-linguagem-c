/******************************************************************************
3) Faça um programa que some os números ímpares entre 1 e 1000 
e imprima a resposta.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, numero = 1000;
    int soma = 0;
    
    for(i = 1; i <= numero; i++)
        if(i % 2 == 1)
            soma += i;
    printf("Soma dos impares de 1 a 100: %d\n\n", soma);

    return 0;
}
