/*
 1) Elabore um programa em c para ler do teclado um valor inteiro entre 0 e 10
 e apresente a tabuada.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero, opcao;
    float calculo;
    
    printf("\t***GERADOR DE TABUADA***");
    
    do{
        printf("\n\nDigite um numero entre 1 e 10: ");
        scanf("%d", &numero);
    }while(numero <= 0 || numero > 10);
    
    printf("\n1 - ADIÇÃO");
    printf("\n2 - SUBTRAÇÃO");
    printf("\n3 - MULTIPILICAÇÃO");
    printf("\n4 - DIVISÃO");
    
    printf("\n\nDigite o numero relativo ao tipo de operção a ser realizada: ");
    scanf("%d", &opcao);
    
    for(i = 1; i < 11; i++){
        switch(opcao){
            case 1:
                calculo = numero + i;
                printf("%d + %d = %d\n", numero, i, (int)calculo);
                break;
            case 2:
                calculo = numero - i;
                printf("%d - %d = %d\n", numero, i,(int)calculo);
                break;
            case 3:
                calculo = numero * i;
                printf("%d * %d = %d\n", numero, i, (int)calculo);
                break;
            case 4:
                calculo = (float)numero / i;
                printf("\n%d / %d = %.1f\n", numero, i, calculo);
                break;
            default:
                printf("Opção inválida!\n");
                printf("Por favor digite a opção novamente: ");
                scanf("%d", &opcao);
                break;
        }    
        
    }
    
    return 0;
}