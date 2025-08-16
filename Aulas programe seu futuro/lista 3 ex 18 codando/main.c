/******************************************************************************
 18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade, 
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que 
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int pessoas, i, idade, maior = 0, menor = 99 , mulheres = 0;
    char sexo;
    float salario, soma_salario = 0;
    printf("Numeros de pessoas pesquisadas: ");
    scanf("%d", &pessoas);
    
    for(i = 1; i <= pessoas; i++){
        printf("\nDidite a idade da %do pessoa: ", i);
        scanf("%d", &idade);
        printf("\nDigite o salario da %do pessoa: ", i);
        scanf("%f", &salario);
        printf("\nDigite o sexo da %do pessoa  f / m ou F /M: ",i);
        scanf(" %c", &sexo);
        getchar();
       
        soma_salario += salario;
            
        if(maior < idade)
            maior = idade;
        if(menor > idade)
            menor = idade;
        if(sexo == 'f' || sexo == 'F' && salario <= 2000)
            mulheres++;
        
                  
    }    
        
    printf("\nMédia salarial do grupo: %.2f", soma_salario / pessoas);
    printf("\nMaior idade: %d", maior);
    printf("\nMenor idade: %d", menor);
    printf("\nQuantidade de mulheres com salario até R$2000,00: %d", mulheres);
    return 0;
}
