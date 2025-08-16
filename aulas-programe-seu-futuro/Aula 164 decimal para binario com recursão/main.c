/******************************************************************************
Aula 164: Faça um procedimento recursivo para converter um numero decimal
para binario.
    resultado resto         resultado resto
3/2     1       1       4/2     2       0
1/2     0       1       2/2     1       0
3 em binario: 011       1/2     0       1   4 em binario 0100

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void binario(int n){
    //caso base 
    if(n == 0)
        printf("%d", n);
    else{
        binario(n / 2);
        printf("%d", n % 2);
    }
        
}

int main()
{
    int n;
    
    printf("Digite um valor decimal: ");
    scanf("%d", &n);
    
    binario(n);

    return 0;
}