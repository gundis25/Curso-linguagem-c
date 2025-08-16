/******************************************************************************

4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em 
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. 
Assuma que a conta será dividida igualmente.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float despesa, porcGorjeta;
    int pessoas;
    
    printf("Quantas pessoas irão dividir a conta? ");
    scanf("%d", &pessoas);
    
    printf("\nDigite o valor total da despesa: ");
    scanf("%f", &despesa);

    printf("\nPorcentagem da gorjeta: ");
    scanf("%f", &porcGorjeta);
  
    float gorjeta = porcGorjeta * despesa / 100;
    float valorTotal = despesa + gorjeta;
    
    printf("\nValor total da conta: %.2f R$\n", valorTotal);
    
    printf("\nO valor a ser pago por cada pessoa è: %.2f R$", valorTotal / (float)pessoas);

    return 0;
}