/******************************************************************************
Aula 144: Como dscobrir se uma frese é palindroma co a linguagem C?
roma me tem amor
a grama é amarga 
anotaram a data da maratona
a mãe te ama
a torre da derrota
a sacada da casa
luz azul
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[50], copia[50];
    int i, tam, diferentes = 0, j = 0;
    
    printf("Digite uma frase: ");
    scanf("%50[^\n]", palavra);
    
    //remover => !? .
    for(i = 0; i < strlen(palavra); i++){
        if(palavra[i] != '!' && palavra[i] != '?' && palavra[i] != ' ' && palavra[i] != '.' )
            copia[j++] = palavra[i];
    }   
    
    copia[j] = '\0';
    
    printf("\nOriginal: %s\nCopia: %s\n", palavra, copia);
    
    tam = strlen(copia);
    tam--;
    for(i = 0; i < strlen(copia); i++){
        if(copia[i] != copia[tam])
            diferentes++;
        tam--;    
    }
    
    if(diferentes == 0 )
        printf("\nÉ palindroma...\n");
    else
        printf("\nNão é palindroma");

    return 0;
}
