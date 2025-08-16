/******************************************************************************
Aula 150 Procedimento para imprimir uma matriz 
Função para somar as colunas  de uma matriz
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int tam = 5;
int mat[5][5];//Matriz de escopo global não precisa passar como parametro

//procedimento para imprimir uma matriz
void imprimir(){//procedimento sem parametro pois a matriz e de escopo global
    int i,j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            
            printf("%2d", mat[i] [j]);
        }
        printf("\n");
    }
}

//Função para retornar a soma de uma linha da matriz
int somarLinha(int l){
    int c, soma1 = 0;
    
    for(c = 0; c < tam; c++)
        soma1 += mat[l][c];
    return soma1;    
    
}

//Função para retornar a soma de uma coluna da matriz
int somarColuna(int c){
    int l, soma2 = 0;
    for(l = 0; l < tam; l++)
        soma2 += mat[l][c];
        
    return soma2;
}

int main()
{
    int i, j;
    
    srand(time(NULL));
    //Gerando numeros aleatorios entre 0 e 9 para preencher a matriz
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            mat[i][j] = rand() % 10;
        }
    }
    
    //imprime a matriz gerada
    imprimir();
    
    printf("\n");
    //imprimir a soma de todas as linhas da matriz
    for(i = 0; i < tam; i++)
        printf("Soma da linha %d; %d\n", i, somarLinha(i));
        
    //imprimir a soma de todas as colunas da matriz    
    printf("\n");    
    for(j = 0; j < tam; j++)
        printf("Soma das coluna %d: %d\n", j, somarColuna(j));
        
    return 0;
} 