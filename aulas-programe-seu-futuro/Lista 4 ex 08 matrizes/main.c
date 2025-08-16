/******************************************************************************
8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7..

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i, j;
    int mat[5][7];
    
    srand(time(NULL));
    
    
    for(i = 0; i <= 4; i++){
        for(j = 0; j <= 6; j++){
            mat[i][j] = rand() % 10; 
           // printf("Digite o valor daposição %d %d: ", i, j);
           // scanf("%d", &mat[i][j]);
           
        }    
    }
   
    int soma = 0;
    for(i = 0; i <= 4; i++){
        for(j = 0; j <= 6; j++){
        soma += mat[i][j];   
        printf("%3d", mat[i][j]);
        } 
    printf("\n");    
    } 
    
    printf("\n\nSoma dos elementos da matriz: %d \n\n", soma);
    
    return 0;
}