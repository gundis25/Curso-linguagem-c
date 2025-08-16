/******************************************************************************

Aula 160: Desenvolva uma função recursiva que calcule a soma dos numeros 
inteiro de 1 a N.

*******************************************************************************/
#include<stdio.h>
#include <stdio.h>

int soma(int n){
    if(n == 0)
        return 0;
    else
        return n + soma(n -1);
}

    /* Ex:
        Empilhando
        n = 5
        1 n = 5
        2 n = 4 
        3 n = 3 
        4 n = 2 
        5 n = 1 
                    Desempilhando 
                    5 = 1 + 0 = 1   
                    4 = 2 + 1 = 3
                    3 = 3 + 3 = 6
                    2 = 4 + 6 = 10 
                    1 = 5 + 10 = 15 
    */

int main()
{
    int n; 
    
    printf("Digite N: ");
    scanf("%d", &n);
    
    printf("Soma de 1 ate %d: %d\n", n, soma(n));

    return 0;
}