/******************************************************************************
12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, tam = 7;
    int matriz[tam][tam];
    
    srand(time(NULL));
    
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            matriz[i][j] = rand() % 99;
        }
    }
    printf("Matriz gerada:\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal secundaria:");
    for(i = 0; i < tam; i++){
        printf("%d ", matriz[i][tam - 1 - i]);  
    }
    
    printf("\n\nDiagonal secundaria:");
    for(i = 0; i < tam; i++){
        printf("%d ", matriz[i][tam - 1 - i]);   
    }      
    printf("\n\n");
    
    
    return 0;
}    