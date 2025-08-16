/******************************************************************************

Aula 50 : Estrutura de seleção switch case
Opções: - 1 - cadastrar produto
        - 2 - vender produto
        - 3 - buscar produto
        - 4 - imprimir relatorio
        - 5 - sair
        
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int opcao;
    
    printf("\n1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir relatorio\n5 - sair\n");
    scanf("%d", &opcao);
    
    switch(opcao){
    case 1:
        printf("\nCadastrar novo produto.\n");
        break;
    case 2:
        printf("\nVendendo um novo produto.\n");
        break;
    case 3:
        printf("\nBuscando um novo produto.\n");
        break;
    case 4:
        printf("\nImprimindo relatório\n");
        break;
    case 5:
        printf("\nSaindo...\n");
        break;
    default:
        printf("\nOpção inválida!\n");
    }
    return 0;
}