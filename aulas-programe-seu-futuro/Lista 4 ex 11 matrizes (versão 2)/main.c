/******************************************************************************
11) Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, tam = 5;
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
    
    printf("\nDiagonal principal:\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(i == j)
                printf("%2d ", matriz[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    
    return 0;   
}    