/******************************************************************************
Aula 108
Como ler uma matriz (array bidimensional) do teclado com a linguagem de programação C?

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    char mat5[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'};
    
    for(i = 0; i < 3; i++){ // índice das linhas
        for(j = 0; j < 3; j++){  // índice das colunas
            printf("Digite o valor %d %d: ", i, j);
            scanf("%d", &mat1[i] [j]);
        }
    }
    printf("\n");
    for(i = 0; i < 3; i++){ // índice das linhas
        for(j = 0; j < 3; j++)  // índice das colunas
            printf("%d ", mat1[i][j]);
        printf("\n");
    }

 
    return 0;
}