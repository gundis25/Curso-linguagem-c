/******************************************************************************
Aula 131: Lendo uma String com a função fgets()
Tome cuidado pois a ultima posição do vetor marca o fim da String

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[10];
    
    printf("Digite seu nome: ");
    //scanf("%s", palavras);
    //scanf("%20[ˆ\n]", palavras);
    //gets(palavras);
    fgets(palavras, 10, stdin);//file/get/String 
    
    printf("\n%s\n\n", palavras);

    return 0;
}