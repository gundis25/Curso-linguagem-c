/******************************************************************************
Aula 137: Como copiar uma Strings com a função strcpy()?
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char palavra1[50] = {"abacate"};
    char palavra2[50] = {"bola"};
    
    printf("\nAntes de compiar: \npalavra1: %s\npalavras2: %s\n", palavra1, palavra2);
    
    strcpy(palavra2, palavra1);
    
    printf("\nDepois de compiar: \npalavra1: %s\npalavras2: %s\n", palavra1, palavra2);
    
    return 0;
}