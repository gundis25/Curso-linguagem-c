/******************************************************************************
7) Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
após a ordenação.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, troca,copia, contador;
    int vetor[1000];
    
    srand(time(NULL));
    
    for(i = 0; i <= 99; i ++)
        vetor[i] = rand() % 1000;
        
    printf("Vetor antes da ordenação: ");    
    for(i = 0; i <= 99; i++){
        printf("%3d ", vetor[i]);
    }
    do{
        troca = 0;
        contador++;
        for(i = 0; i <= 98; i++)
            if(vetor[i] > vetor[i+1]){
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                troca = 1;
            }
    }while(troca); 
    
    printf("\n\nVetor depois da ordenação: contador: %d\n", contador);
    for(i = 0; i <= 99; i++)
        printf("%d ", vetor[i]);
    return 0;
}