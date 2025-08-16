/******************************************************************************
17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o 
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor, positivos = 0, negativos = 0;
    
    do{
        printf("Digite um valor: ");
        scanf("%d", &valor);
        
        if(valor > 0)
            positivos++;
        if(valor < 0)
            negativos++; 
    
    }while(valor != 0);
    
    printf("\nPositivos = %d", positivos);
    printf("\nNegativos = %d", negativos);
    
    return 0;
}
