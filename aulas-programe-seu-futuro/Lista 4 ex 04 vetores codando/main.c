/******************************************************************************
4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos 
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas 
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade 
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que 
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois, 
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados 
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos 
empatados).
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,posicao;
    float valParcial, valTotal = 0;
    float comicao;
    float objeto[5];
    int vendas[5];
    
    
    for(i = 0; i <= 4; i++){
        printf("Digite o valor do %do objeto: ",i+1);
        scanf("%f", &objeto[i]);
    }
    printf("\n");
    for(i = 0; i <= 4; i++){
        printf("Digite a quantidade vendida do %do objeto: ", i+1);
        scanf("%d", &vendas[i]);
    }
    
    printf("\n");
    for(i = 0; i <= 4; i++){
        valParcial = objeto[i] * vendas[i];
        valTotal += valParcial; 
        comicao = valTotal * 0.05;
        printf("\nQuantidade vendida do produto %d: %d", i+1, vendas[i]);
        printf("\nvalor unitário do produto %d: %.2f", i+1, objeto[i]);
        printf("\nValor total vendido do produto %d: %.2f", i+1, valParcial);
        printf("\n");
    }
    
    printf("\n");
    printf("\nValor total das vendas: %.2f", valTotal);
    printf("\nValor da comição a ser paga ao funcionario: %.2f\n", comicao);
    
     int maisVendido = 0;
     for(i = 0; i < 5; i++){
        if(vendas[i] > maisVendido){
            maisVendido = vendas[i];
        }

    }
    
    printf("\n");
    for(i = 0; i < 5; i++){
        if(vendas[i] == maisVendido){
            printf("Produto mais vendido: %d\t\tValor R$%.2f\n", i+1, objeto[i]);
        }
    }
    
    
        
    return 0;
}