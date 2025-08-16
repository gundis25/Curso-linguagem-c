/******************************************************************************
Aula 136: Como comparar duas Strings com a função strcmp()?
0 -> As Strings são iguais
-1 -> A String1 for menor que a String2
1 -> A string2 for maior que String1


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char palavra1[50] = {"abacate"};
    char palavra2[50] = {"bola"};
    
    printf("\n\nResultado: %d\n\n",strcmp(palavra1, palavra2));
    
    return 0;
}