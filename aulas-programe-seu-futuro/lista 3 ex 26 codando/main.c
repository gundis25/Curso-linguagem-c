/******************************************************************************
25) Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, 
passando para a próxima linha a cada X números.
Exemplo de entrada:
3 99
Exemplo de saída:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99
*******************************************************************************/
#include <stdio.h>

int main()
{   int i, j, x, y, soma = 0;
    printf("Digite o valor de X e o valor de Y:");
    scanf("%d %d", &x, &y);
    for(i = 1; i <= y; i++){
        printf("%d", i);
        
        if (i % x == 0) {
            printf("\n");

        }
    } 
    
    printf("\n");
    return 0;
}
