/******************************************************************************
Aula 140: Convertendo uma String para mairsculo ou minusculo com a funçoẽs:
strupr -> upercase
strlwr -> lowercase
OBS: Estas funções não fazem parte da biblioteca padrão da lçinguagem c e não 
funciona no linux.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[50] = {"Bom dia simpatia!"};

    printf("\nAntes: %s\n", palavra);

    strupr(palavra);
    printf("\nMaiúsculas: %s\n", palavra);

    strlwr(palavra);
    printf("\nMinúsculas: %s\n", palavra);

    return 0;
}