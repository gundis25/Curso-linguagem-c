/******************************************************************************
Aula 110
Como preencher uma matriz gerando números aleatórios com as funções rand() e srand()?

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i, j, mat1[3][3] = {11,15,17,20,19,36,75,35,85}; 
  
    srand(time(NULL));
  
    
    for(i = 0; i < 3; i++){ // índice das linhas
        for(j = 0; j < 3; j++){  // índice das colunas
            mat1[i][j] = 1 + rand() % 99; 
        }    
    }        
    printf("\n");
    for(i = 0; i < 3; i++){ // índice das linhas
        for(j = 0; j < 3; j++)  // índice das colunas
            printf("%3d ", mat1[i][j]);
        printf("\n");
    }

 
    return 0;
}