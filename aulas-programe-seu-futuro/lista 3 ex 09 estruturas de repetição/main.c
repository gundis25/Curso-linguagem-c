/******************************************************************************
 * 9) Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + … + n, onde n é um número inteiro, maior que zero informado pelo usuário
*******************************************************************************/
#include <stdio.h>

int main()
{
    long long int i, A = 0, n;
    
    printf("Digite um valor: ");
    scanf("%lld", &n);
    
    while(n <= 0){   
        if(n <= 0)
            printf("Não pode ser 0!\nDigite novamente: ");
            scanf("%lld", &n);
    }
    for(i = 1; i <= n; i++){
        A = A + i;
    }
    printf("O resultado é %lld", A);
    
    return 0;
}