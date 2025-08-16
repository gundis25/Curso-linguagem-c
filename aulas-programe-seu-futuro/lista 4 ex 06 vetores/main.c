/******************************************************************************
6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um 
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
*******************************************************************************/
#include <stdio.h>

int main()
{   
    int i, opcao;
    float vetor[9];
    
    for(i = 0; i < 10; i++){
        printf("Digite o numero da posição %d: ", i);
        scanf("%f", &vetor[i]);   
    }
   
    do{
    printf("\nEscolha uma das opções abaixo:");
    printf("\n\n0 - Finaliza o programa;");
    printf("\n1 - imprime o vetor na ordem do inicio ao fim;");
    printf("\n2 - imprime o vetor na ordem inversa (do fim para inicio)\n");
    scanf("%d",&opcao);
    
        switch(opcao){
            case 0:
                printf("\nSaiu!!!");
                break;
            case 1:
                printf("\nVetor nomal: ");
                for(i = 0; i < 10; i++){
                    printf("%.2f ", vetor[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("\nVetor invertido: ");
                for(i = 9; i >= 0; i--){
                    printf("%.2f ", vetor[i]);
                }
                printf("\n");
                break;
            default:
                printf("\nOpção inválida!\nDigite novamente: ");
            break;
            
        }
    }while(opcao != 0 );
    
    return 0;
}
