/******************************************************************************
3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
modificado.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//Indice 0 1 2 3 4 5 6 7 8  9 10 11 12 13 14 15 16 17 18 19  
//vetor  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
//inve  19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1  0 
int main()
{
    int i, fim = 19, copia, vetn[20];
    
    for(i = 0; i < 20; i++){
        printf("Digite o valor da posição %d: ",i);
        scanf("%d", &vetn[i]);
    }
    
    printf("\nVetor original: ");
    for(i = 0; i < 20; i++){
        printf("%3d", vetn[i]);
    }
    
    for(i = 0; i < 10; i++){
        copia = vetn[i];
        vetn[i] = vetn[fim];
        vetn[fim] = copia;
        fim--;
    }
    
    printf("\nVetor modificado: ");
    for(i = 0; i < 20; i++){
        printf("%3d", vetn[i]);
    }    
    return 0;
}