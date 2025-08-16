/******************************************************************************
Aula 142: Matriz de String na linguagem c 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nomes[5][25];
    int l;

    for(l = 0; l < 5; l++){
        printf("\nDigite o nome da posicao %d. ", l);
        /*
        scanf("%25[^\n]", nomes[l]);
        
        //Remove o enter do buffer do teclado
        scanf("%cent
        */
                
        fgets(nomes[l], 25, stdin);
    }

    for(l = 0; l < 5; l++)
        printf("\nNome na posicao %d: %s", l, nomes[l]);

    return 0;
}