/******************************************************************************
Aula 162: Desenvolva uma função rursiva que encontre e retorne o maio elemento 
de um vetor de inteiros de tamanho N.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int maior(int v[], int tam, int indice){
    if(tam == 0)
        return v[indice];
    else{
        if(v[tam - 1] > v[indice])
            return maior(v, tam - 1, tam - 1);
        else
            return maior(v, tam - 1, indice);
    }        
        
}

int main()
{
    int vet[10] = {12, 258, 1300, 445, 58, 67, 700, 8, 9, 10};
    
    printf("Maior: %d\n", maior(vet, 10, 0));

    return 0;
}