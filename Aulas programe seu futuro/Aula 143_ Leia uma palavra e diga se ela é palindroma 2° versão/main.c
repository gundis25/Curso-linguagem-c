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
    int i, tam, diferentes = 0;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    tam = strlen(palavra);
    tam--;//ultimo indice valido da string (vetor)
    i = 0;//primeiro indice valido da string (vetor)
    
    while(tam >= i){
        if(palavra[i] != palavra[tam])//compara se as letras são diferentes 
            diferentes++;
        i++;
        tam--;
    }
    
    if(diferentes == 0)
        printf("\nÉ palidroma...\n");
    else
        printf("Não é palidroma...");
        
    return 0;
}    