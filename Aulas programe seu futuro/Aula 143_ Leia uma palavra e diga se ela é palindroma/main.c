/******************************************************************************
 Aula 143: Leia uma palavra e diga se ela é palindroma.
 ama 
 arara
 asa
 osso
 radar
 reviver
 socos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30], copia[30];
    int i, tam, iguais = 0;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    tam = strlen(palavra);
    for(i = 0; i < strlen(palavra); i++){//O loop continua enquanto i for menor que o comprimento original da palavra.
        copia[i] = palavra[tam - 1];
        tam--;
    }
    
    copia[i] = '\0';
    tam = strlen(palavra);
    
    printf("Original: %s\nCopia: %s\n", palavra, copia);
    
    for(i = 0; i < tam; i++){
        if(palavra[i] == copia[i])
            iguais++;
    }
    
    if(tam == iguais)
        printf("\nÉ palimdroma...\n");
    else
        printf("\nNão é palindroma...");
        
    return 0;
}
