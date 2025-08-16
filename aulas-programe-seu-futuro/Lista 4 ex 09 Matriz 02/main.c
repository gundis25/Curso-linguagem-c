/******************************************************************************
9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;
    int mat[5][10];
    int somaLinha[5];
    int somaColuna[10];
    
    srand(time(NULL));
    
    printf("Matriz gerada:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            mat[i][j] = rand() % 100;
            printf("%2d ", mat[i][j]);
        }
    printf("\n");      
    }
    for(i = 0; i < 5; i++){
        int soma = 0;
        for(j = 0; j < 10; j++){
            soma += mat[i][j];
        }
        somaLinha[i] = soma;    
    }
    
    for(j = 0; j < 10; j++){
        int soma = 0;
        for(i = 0; i < 5; i++){
            soma += mat[i][j];
        }
        somaColuna[j] = soma; 
    }
        
    printf("\nVetor gerado da soma das linhas:\n");
    for(i = 0; i < 5; i++){
        printf("linha %d: %d\n", i+1, somaLinha[i]);
    }    
    
    printf("\n\nVetor gerado da soma das colunas:\n");    
    for(i = 0; i < 10; i++){
        printf("Coluna %d: %d\n", i+1, somaColuna[i]);
    
    }
    return 0;
}