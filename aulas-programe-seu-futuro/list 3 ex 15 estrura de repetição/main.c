/******************************************************************************
15) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na 
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n1, n2, resultado = 0;

    printf("Digite dois numeros inteiro\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    for(i = 1; i <= n1; i++){
        resultado += n2;
    }
    printf("\n%d * %d = %d", n1, n2, resultado);

    return 0;
}
