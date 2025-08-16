/******************************************************************************
4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, numero = 1000;
    int soma = 0;
    
    for(i = 1; i <= numero; i+=2 ){//500
        soma += i;//soma = soma + 1 -> 500
        printf("%3d ", i);
    }
    printf("\n\nSoma dos impares de 1 a 100: %d\n\n", soma);
    return 0;
}
