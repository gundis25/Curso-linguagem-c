#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
            Aula 175: Criaando uma matriz de struct.

*/

typedef struct{
    int dia, mes, ano;
}DataNas;

typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void removeQuebraLinha(char *str){
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
}

// Procedimento para imprimir os dados de uma Pessoa
void imprimirPessoa(Pessoa p){
    printf("\n\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas.: %d/%d/%d\n\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

// função que lê os dados de uma pessoa e retorna para quem chamou
Pessoa lerPessoa(){
    Pessoa p;
    printf("\nDigite seu nome: ");
    fgets(p.nome, 100, stdin);
    removeQuebraLinha(p.nome);
    p.nome[strcspn(p.nome, "\n")] = '\0';
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    printf("Digite f ou m para o sexo:");
    scanf(" %c", &p.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa:");
    scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
    getchar();
    return p;
}

int main() {
    int i, j;
    Pessoa pessoas[2] [2];

    for(i = 1; i <= 2; i++){
        for(j = 1; i <= 2; i++)
            pessoas[i][j] = lerPessoa();    
    } 
    
    for(i = 1; i <= 2; i++){
        for(j = 1; i <= 2; i++)
            imprimirPessoa(pessoas[i] [j]);   
    }
    

    return 0;
    
}    