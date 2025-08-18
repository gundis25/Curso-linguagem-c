/******************************************************************************
Aula 167: Como criar novos tipos de dados em c com typedef struct

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definindo o tipo de dado Pessoa  
typedef struct{
    int idade;
    char sexo;
    char nome[100];  
}Pessoa;

//definindo o tipo de dado Pessoa2
struct Pessoa2{
    int idade;
    char sexo;
    char nome[100];
};

int main()
{
    //tipo de dado e variavel
    Pessoa pessoa1;
    struct Pessoa2 pessoa2;
    
    pessoa1.idade = 35;
    pessoa1.sexo = 'f';
    //funcao que copia a string para variavel pessoa1
    strcpy(pessoa1.nome,"Maria Madalena"); 
    
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    
    pessoa2.idade = 40;
    pessoa2.sexo = 'm';
    //funcao que copia a string para variavel pessoa2
    strcpy(pessoa2.nome,"Jose da Silva"); 
    
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);
    
    return 0;
}
