/******************************************************************************
5 - Escreva um programa que peça um número inteiro ao usuário e imprima
o fatorial desse número. Para calcular o fatorial, basta ir multiplicando
pelos números anteriores até 1. Por exemplo, o fatorial de 4 é 4 * 3 * 2
* 1, que é igual a 24.
*******************************************************************************/
#include <stdio.h>

int fatorial(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main()
{
    
    int numero;
    
    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d", &numero);
    
    printf("O fatorial de %d é %d ", numero, fatorial(numero));
    
    return 0;
}