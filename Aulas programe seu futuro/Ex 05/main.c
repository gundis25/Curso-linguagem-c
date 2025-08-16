/******************************************************************************

5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o 
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
sabendo que são descontados 8% para imposto de renda.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diaria = 45.00;
    float impRenda = 8;
    float desconto, pagBruto, pagLiquido;
    int diasTrab;
    printf("Dias trabalhados : ");
    scanf("%d", &diasTrab);
    pagBruto = diaria *diasTrab;
    desconto = pagBruto * impRenda / 100;
    
    printf("\ntotal de desconto: %.2f RS\n", desconto);
    
    printf("\nO total liquido a receber pelo trabalho: %.2f R$", pagBruto - desconto);
    

    return 0;
}
