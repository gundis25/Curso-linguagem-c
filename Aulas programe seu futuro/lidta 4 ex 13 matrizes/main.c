/******************************************************************************
13) Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na 
tela.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, l, c;
    int matriz[5][4];
    int transposta[4][5];
    
    srand(time(NULL));
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            matriz[i][j] = rand() % 99;
        }
    }
    
    printf("Matriz normal:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            printf("%2d ", matriz[i][j]);        
        }
        printf("\n");
    }
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            //transpõe os elmentos; linha vira coluna e colunavira linha    
            transposta[j][i] = matriz[i][j];     
        }
    }
    
    printf("\nMatriz tranposta:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("%2d ", transposta[i][j]);        
        }
        printf("\n");
    }
    
    
    return 0;
}