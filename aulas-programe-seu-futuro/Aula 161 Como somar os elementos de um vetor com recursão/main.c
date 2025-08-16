/******************************************************************************

Aula 161: Faça uma função recursiva para calcular a soma de todos os valos
de um vetor de inteiros.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int tam){
    if(tam == 0)
        return 0;
    else
        return v[tam - 1] + soma(v, tam - 1);
}

        /*Ex: 
            Empilhando 
            1 tam = 4 
            2 tam = 3 
            3 tam = 2 
            4 tam = 1 
            5 tam = 0 
                        
                        Desempilhando
                        4 1 + 0 = 1 
                        3 2 + 1 = 3 
                        2 3 + 3 = 6 
                        1 4 + 6 = 10
                        
        */

int main()
{
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("Soma: %d\n", soma(vet, 4));

    return 0;
}
