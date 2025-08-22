#include <stdio.h>
#include <stdlib.h>

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
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    scanf("%c");
    printf("Digite f ou m para o sexo:");
    scanf("%c", &p.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa:");
    scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
    scanf("%c");
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