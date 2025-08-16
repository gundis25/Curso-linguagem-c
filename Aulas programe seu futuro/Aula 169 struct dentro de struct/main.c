/******************************************************************************
Aula 169: Posso ter struct de struct 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia, mes, ano;
}DataNasc;

typedef struct{
    DataNasc dataNasc;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;


int main()
{
    Pessoa pessoa;
    
    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite f ou m para o sexo:");
    scanf(" %c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.dataNasc.dia,&pessoa.dataNasc.mes, &pessoa.dataNasc.ano);
    
    printf("\nNome: %sIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
    printf("Data de nascimento: %d/%d/%d\n",pessoa.dataNasc.dia, pessoa.dataNasc.mes, pessoa.dataNasc.ano);
    
    return 0;
}
