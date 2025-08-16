/******************************************************************************
4) Implemente uma calculadora. O programa deve pedir 3 números ao usuá-
rio: a, b e operacao. Se operacao for igual a 1, você deverá imprimir

a soma de a + b. Se ela for 2, a subtração. Se for 3, a multiplicação. Se for
4, a divisão.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int operacao;
    int a, b;
    printf("-----------Calculadora----------\n");   
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b); 
    printf("\nDigite 1 para soma.\nDigite 2 para subtração.\nDigite 3 para multiplicação.\nDigite 4 para divisão.\n");
    scanf("%d", &operacao);
    while(operacao < 1 || operacao > 4){
        printf("Opção incalida!\n");
        printf("\nDigite 1 para soma.\nDigite 2 para subtração.\nDigite 3 para multiplicação.\nDigite 4 para divisão.\n");
        scanf("%d", &operacao);
    }
    
    switch(operacao){
        case 1:
            printf("\n%d + %d = %d\n", a, b, a + b); 
            break;
        case 2:
            printf("\n%d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("\n%d * %d = %d\n", a, b, a * b);
            break;    
        default:
            printf("\n%d / %d = %.2f\n", a, b, (float)a / b); 
            break;
            
    }
    

    return 0;
}