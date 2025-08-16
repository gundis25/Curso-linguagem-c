/******************************************************************************
Aula 130: Lendo uma String com a função gets()
Está função é insegura é aconselhavel não usa-la

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[20];
    
    printf("Digite seu nome: ");
    //scanf("%s", palavras);
    //scanf("%20[ˆ\n]", palavras);
    
    gets(palavras);
    
    printf("\n%s\n\n", palavras);

    return 0;
}