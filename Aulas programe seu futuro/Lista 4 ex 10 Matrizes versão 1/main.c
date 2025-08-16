/******************************************************************************
10) Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar 
em uma matriz C. Imprima as três matrizes.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;
    int matrizA[3][3], matrizB[3][3], matrizC[3][3];
    
    srand(time(NULL));
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrizA[i][j] = rand() % 99;//Como as matrizes são do mesmo tamnho posso fazer a geração das matrizes no mesmo loop for. 
            matrizB[i][j] = rand() % 99;
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j]; 
        }   
            
    }
    
    printf("Matriz A:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%2d ", matrizA[i][j]); 
        }
    printf("\n");
    }
    
    printf("\nMatriz B:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%2d ", matrizB[i][j]); 
        }
    printf("\n");
    }
    
    printf("\nMatriz C:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%3d ", matrizC[i][j]); 
        }
    printf("\n");
    }
    return 0;
}
