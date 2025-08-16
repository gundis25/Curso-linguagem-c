/******************************************************************************
Aula 148: Variéveis globais e escopo de variáveis.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idade2 = 35;//variavel de escopo global acessivel e editavel em todo o programa

void imprimir(int id){//variavel de escopo local acessivel apenas detro do procedimento
    id++;
    idade2++;
}

int main()
{
    int idade = 25;//variavel de escopo local acessível e editavel somente no escopo local (detro do main)
    
    printf("\nlinha 20 Idade: %d\n", idade);
    printf("\nLinha 21 Idade2; %d\n", idade2);
    imprimir(idade);
    printf("\nLinha 23 Idade: %d\n", idade);
    printf("\nlinha 24 Idade2: %d\n", idade2);

    return 0;
    
}