/******************************************************************************
7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, 
inclusive N, se for o caso.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, N;
    
    printf("Digite um numero: ");
    scanf("%d", &N);
    
    for(i = 1; i <= N; i++){//pode-se utilizar i+= 2 e eliminar o if e otimizar -lo
        if(i % 2 == 0){
            printf("%d ", i * i);
        }
    }
    
    

    return 0;
}
