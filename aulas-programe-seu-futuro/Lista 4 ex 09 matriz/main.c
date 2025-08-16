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
    int i, j,f;
    int mat[5][10];
    int vetsoma[5];
    int vetSoma2[10];
    
    srand(time(NULL));
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            mat[i][j] = rand() % 9;
            printf("%3d ", mat[i][j]);
        }
    printf("\n");      
    }
    for(i = 0; i < 5; i++){
        int somaLinha = 0;
        for(j = 0; j < 10; j++){
            somaLinha += mat[i][j];
        }
    vetsoma[i] = somaLinha;    
    }
    printf("\nVetor gerado da soma das linhas: ");
    for(i = 0; i < 5; i++){
        printf("%d ", vetsoma[i]);
    }
    printf("\n\nVetor gerado da soma das colunas: ");
    for(f = 0; f < 10; f++){
        int somaColuna = 0;
        for(i = 0; i < 5; i++){
            for(j = f; j == f; j++){
                somaColuna += mat[i][j];
            }
        }
        vetSoma2[f] = somaColuna; 
    }
    for(i = 0; i < 10; i++){
        printf("%d ", vetSoma2[i]);
    }
    return 0;
}