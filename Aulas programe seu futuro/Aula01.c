#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, valor2;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);
    printf("""\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n ",valor, valor2);
    printf("\n Precione qualquer tecla para finalizar.");
    getchar();

    return 0;
}