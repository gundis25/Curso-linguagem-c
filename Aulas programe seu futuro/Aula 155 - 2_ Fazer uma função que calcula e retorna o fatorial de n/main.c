/******************************************************************************
Aula 155: Fazer uma função que calcula e retorna o fatorial de n.
4! = 4 * 3 * 2 * 1 + 24
1! e 0! = 1

*******************************************************************************/
#include <stdio.h>
/* Ao escreversum funçao abaixo da função main é necessario informar o prototipo(assinatura)
da função antes da função main.
*/
int fatorial(int n);

int main()

{
    int n;
    
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);
    
    printf("\nFatorial de %d: %d\n", n, fatorial(n));

    return 0;
}

int fatorial(int n){
    if(n  == 0 || n == 1){
        return 1;
    }else{
        // 5 * 4!
        return n * fatorial( n - 1);
    }    
}