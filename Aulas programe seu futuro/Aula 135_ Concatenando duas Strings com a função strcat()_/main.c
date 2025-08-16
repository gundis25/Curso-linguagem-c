/******************************************************************************
Aula 135: Concatenando duas Strings com a função strcat()?


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    

    char palavras[50] = {"Oi."};
    
    char palavra1[55] = {"Oi."};
    char palavra2[55] = {" Bom dia!"};
    
    strcat(palavras, " Bom dia!");
    printf("\n\t%s\n",palavras);
    
    strcat(palavra1, palavra2);
    printf("\n\t%s\n",palavra1);
    
    return 0;
}