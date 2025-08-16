/******************************************************************************

Aula 50 : Estrutura de seleção switch case
Opções: - A - cadastrar produto
        - B - vender produto
        - C - buscar produto
        - D - imprimir relatorio
        - C - sair
        - Código witch case com caracteres -
        
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char opcao;
    
    printf("\nA - Cadastrar produto\nB - Vender produto\nC - Buscar produto\nD - Imprimir relatorio\nZ - sair\n");
    
    scanf("%c", &opcao);
    
    switch(opcao){
    case 'A':
        printf("\nCadastrar novo produto.\n");
        break;
    case 'B':
        printf("\nVendendo um novo produto.\n");
        break;
    case 'C':
        printf("\nBuscando um novo produto.\n");
        break;
    case 'D':
        printf("\nImprimindo relatório\n");
        break;
    case 'Z':
        printf("\nSaindo...\n");
        break;
    default:
        printf("\nOpção inválida!\n");
    }
    return 0;
}