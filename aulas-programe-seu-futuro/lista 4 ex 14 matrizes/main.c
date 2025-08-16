/******************************************************************************

14) Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma 
matriz 4 x 4.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, tam = 4;
    int matriz[tam][tam];
    
    srand(time(NULL));
    
    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 3; j++){
            matriz[i][j] = rand() % 99;
        }
    }
    
    printf("Matriz gerada:\n");
    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 3; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    
     printf("Abaixo da diagonal principal:\n");
    for(i = 0; i <= 3; i++){
        for(j = 0; j < i; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");    
    }
    
    
    return 0;
}