#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia, mes, ano;
}DataNasc;

typedef struct{
    char rua[100];
    char bairro[100];
    char municipio[100];
    char estado[4];
    int numero, cep;
}Endereco;

typedef struct{
    DataNasc dataNasc;
    Endereco endereco;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
//função para ler os dados da pessoa
Pessoa lerDados(){
    Pessoa p;
     printf("--- Cadastro de Pessoa ---\n");
    printf("Digite seu nome: ");

    fgets(p.nome, 100, stdin);
    // Remove o '\n' lido pelo fgets, se ele existir
    p.nome[strcspn(p.nome, "\n")] = 0;

    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    limparBufferEntrada(); // Limpa o '\n' do buffer

    printf("Digite f ou m para o sexo: ");
    scanf(" %c", &p.sexo);
    limparBufferEntrada(); 

    printf("Digite sua data de nascimento (dd mm aaaa): ");
    scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);
    limparBufferEntrada(); 

    // Lendo os dados do endereço
    printf("\n--- Dados do Endereco ---\n");
    printf("Digite o nome da rua: ");
    fgets(p.endereco.rua, 100, stdin);
    p.endereco.rua[strcspn(p.endereco.rua, "\n")] = 0; 

    printf("Digite o bairro: ");
    fgets(p.endereco.bairro, 100, stdin);
    p.endereco.bairro[strcspn(p.endereco.bairro, "\n")] = 0;

    printf("Digite o municipio: ");
    fgets(p.endereco.municipio, 100, stdin);
    p.endereco.municipio[strcspn(p.endereco.municipio, "\n")] = 0;

    printf("Digite UF: ");
   
    fgets(p.endereco.estado, 4, stdin);
    p.endereco.estado[strcspn(p.endereco.estado, "\n")] = 0;

    printf("Digite o numero da residencia: ");
    scanf("%d", &p.endereco.numero);
    limparBufferEntrada();

    printf("Digite o cep: ");
    scanf("%d", &p.endereco.cep);
    limparBufferEntrada(); 
    
    return p;
}
//Procedimento para imprimir os dados na tela
void imprimirDados(Pessoa p){
     printf("\nNome: %sIdade: %d\nSexo: %c\n", p.nome, p.idade, p.sexo);
    printf("Data de nascimento: %d/%d/%d\n",p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
    printf("Rua: %s\nBairro: %s\nMunicipio: %s\nEstado: %s\nNumero: %d\nCep: %d", p.endereco.rua, p.
    endereco.bairro, p.endereco.municipio, p.endereco.estado, p.endereco.numero, p.endereco.cep);    
}

int main()
{
    Pessoa pessoas[3];
    int i;
    
    for(i = 1; i <= 3; i++)
        pessoas[i] = lerDados();
        
    for(i = 1; i <= 3; i++)    
        imprimirDados(pessoas[i]);
        
    return 0;
}
