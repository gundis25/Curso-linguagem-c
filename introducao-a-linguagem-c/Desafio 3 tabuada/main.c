/******************************************************************************
3) Escreva um programa que peça um inteiro ao usuário, e com esse inteiro,
ele imprima, linha a linha, a tabuada daquele número até o 10. Por exem-
plo, se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4,

2x3=6, ..., 2x10=20.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, opcao, i, resultado = 0;
    printf("-----------TABUADA----------\n\nDigite 1 para soma.\nDigite 2 para subtração.\nDigite 3 para multiplicação.\nDigite 4 para divisão.\n");
    scanf("%d", &opcao);
    printf("\nDigite o valor da tabuada: ");
    scanf("%d", &n);
    
    switch(opcao){
        case 1:
            for(i = 1; i <= 10; i++){
                printf("\n%d + %d = %d\n", n, i, n + i); 
            }
            break;
        case 2:
            for(i = 1; i <= 10; i++){
                printf("\n%d - %d = %d\n", n, i, n - i); 
            }
            break;
        case 3:
            for(i = 1; i <= 10; i++){
                printf("\n%d * %d = %d\n", n, i, n * i); 
            }
            break;
        case 4:
            for(i = 1; i <= 10; i++){
                printf("\n%d / %d = %d\n", n, i, n / i); 
            }
            break;
        default:
    }
        

    return 0;
}