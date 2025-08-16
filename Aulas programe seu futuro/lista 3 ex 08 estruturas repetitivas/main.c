/******************************************************************************
8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2, opcao;
    float calculo;
    
    printf("\tEscolha uma das opções\n\n");
    printf("1 - Somar\n2 - Sutrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair ");
    
    do{
        printf("\n\nDigite o numero relativo ao tipo de operação a ser realizada: ");
        scanf("%d", &opcao);
        if(opcao < 0 || opcao > 4){
            printf("\nOpção inválida!");
            continue;
        }else if(opcao == 0){
            printf("\nFim da execussão do programa!");
            break;
        }else
        printf("\nDigite o valor do dividendo: ");
        scanf("%d", &n1);
        printf("\nDigite o valor do divisor : ");
        scanf("%d", &n2);
        
        while(n2 == 0){
            printf("\nNão existe divição por zero!\n\nDigite novamente: ");
            scanf("%d", &n2);
        } 
            
        switch(opcao){
            case 1:
                calculo = n1 + n2;
                    printf("%d + %d = %d\n", n1, n2, (int)calculo);
                    break;
            case 2:
                calculo = n1 - n2;
                    printf("%d - %d = %d\n", n1, n2, (int)calculo);
                    break;
            case 3:
                calculo = n1 * n2;
                    printf("%d * %d = %d\n", n1, n2, (int)calculo);
                    break;
            case 4:
                calculo = (float)n1 / n2;
                    printf("\n%d / %d = %.1f\n", n1, n2, calculo);
                    break;
            default:
                    printf("Opção inválida!\n");
                    break;
        }
    
    }while(opcao != 0);
    return 0;
}
