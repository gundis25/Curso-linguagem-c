#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defininindo a struct para a data de nascimento
typedef struct{
    int dia, mes, ano;
}DataNas;

// Definindo a struct para os dados da pessoa
typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

// Função para limpar o buffer de entrada
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Esta função imprime os dados da pessoa
void imprimirPessoa(Pessoa p){
    printf("\tNome: %s", p.nome); // fgets já adiciona um \n, não é necessário adicionar outro
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas.: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

// Esta função lê os dados de uma pessoa e retorna para quem chamou
Pessoa lerPessoa(){
    Pessoa p;
    printf("Digite seu nome: ");
    fgets(p.nome, 100, stdin);
    // Remove o '\n' lido por fgets, se ele existir
    p.nome[strcspn(p.nome, "\n")] = 0;

    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    limparBufferEntrada(); // Limpa o '\n' deixado por scanf

    printf("Digite f ou m para o sexo: ");
    scanf(" %c", &p.sexo);
    limparBufferEntrada(); // Limpa o '\n' deixado por scanf

    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
    limparBufferEntrada(); // Limpa o '\n' deixado por scanf
    
    return p;
}

int main() {
    Pessoa pessoa;
    char continua;

    do{
        pessoa = lerPessoa();
        imprimirPessoa(pessoa);
        
        printf("Digite S/s para continuar ou qualquer outra tecla para sair. ");
        scanf(" %c", &continua);
        limparBufferEntrada(); // Limpa o '\n' para a próxima iteração
        
    }while(continua == 's' || continua == 'S');
    
    return 0;
}