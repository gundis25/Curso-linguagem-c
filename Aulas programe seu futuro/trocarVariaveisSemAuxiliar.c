/******************************************************************************

3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite o valor de  a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    //exemplo digitado a = 4 e b = 5
    a = a + b; //a = 9
    b = a - b; // b = 9 - 5 que é igual a  4
    a = a - b; // a = 9 - 4 que é igual a 5
     printf("O valor de a apos a troca eh: %d", a);
    printf("\nO valor de b apos a troca eh: %d", b);

    return 0;
}