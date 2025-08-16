/******************************************************************************
Aula 109
Somar duas matrizes e salvar o resultado em uma terceira matriz

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, mat1[3][3] = {11,15,17,20,19,36,75,35,85}; 
    int mat2[3][3] = {1,2,3,4,5,6,7,8,9};
    int mat3[3][3];
    char mat5[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'};
    
  
    
    for(i = 0; i < 3; i++){ // índice das linhas
        for(j = 0; j < 3; j++){  // índice das colunas
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }    
    }        
    printf("\n");
    for(i = 0; i < 3; i++){ // índice das linhas
        for(j = 0; j < 3; j++)  // índice das colunas
            printf("%2d ", mat3[i][j]);
        printf("\n");
    }

 
    return 0;
}