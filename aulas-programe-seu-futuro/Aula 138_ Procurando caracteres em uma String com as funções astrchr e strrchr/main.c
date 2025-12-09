/******************************************************************************
Aula 138: Procurando caracteres em uma String com as funções astrchr e strrchr
strchr -> retorna a primeira ocorrência
strrchr -> retorna a ultima ocorrencia

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    char palavra[50] = {"abacate"};
    char *letra;

    // função que retorna a primeira ocorrência da letra a 
    letra = strchr(palavra, 'a');

    printf("\n%c\n", *letra); // imprime a letra a
    
    //Aritimetica de ponteiros
    printf("\n%c\n", *(letra + 1)); // imprime a letra b
    printf("\n%c\n", *(letra + 2)); // imprime a segunda letra a

    // função que retorna a última ocorrência da letra a 
    letra = strrchr(palavra, 'a');

    printf("\n%c\n", *letra); // imprime a última letra a
    
    //Aritimetica de ponteiros
    printf("\n%c\n", *(letra + 1)); // imprime a letra t
    printf("\n%c\n", *(letra + 2)); // imprime a letra e

    return 0;
}
