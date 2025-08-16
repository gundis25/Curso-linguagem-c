/******************************************************************************
3) Ao terminar uma partida, pergunte para o usuário se ele quer jogar nova-
mente. Se ele digitar “1”, significa que quer, então você deverá começar o
jogo de novo. Para isso, você precisará usar mais um loop.

*******************************************************************************/
// incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// definindo as constantes usando #define
#define PONTOS_INICIAIS 1000.0;
#define TENTATIVAS_FACIL 20;
#define TENTATIVAS_MEDIO 15;
#define TENTATIVAS_DIFICIL 6;
 
int main() {
 
    // imprimindo cabecalho bonito do jogo
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");
 
    // declarando variaveis que serao usadas mais a frente
    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    int limiteInferior;
    int limiteSuperior;
    int novamente;
 
    // definindo a quantidade de pontos inicial
    double pontos = PONTOS_INICIAIS; //#define
    do{ 
    printf("Digite o limite inferior: ");
    scanf("%d", &limiteInferior);
    printf("\nDigite o limite superior: ");
    scanf("%d", &limiteSuperior);
    
    while(limiteInferior >= limiteSuperior){
        printf("O limite inferior não pode ser maior que o limite superior\n");
        printf("Digite o limite inferior: \n");
        scanf("%d", &limiteInferior);
        printf("Digite o limite superior: \n");
        scanf("%d", &limiteSuperior);
    }
    
    // gerando um numero secreto aleatorio
    srand(time(0));
    int numerosecreto = limiteInferior + rand() % (limiteSuperior - limiteInferior + 1);

    // escolhendo o nivel de dificuldade
    printf("\nQual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    while(nivel < 1 || nivel > 3){
        printf("Opção inválida!\n");
        printf("Qual o nível de dificuldade?\n");
        printf("(1) Fácil (2) Médio (3) Difícil\n\n");
        printf("Escolha: ");
        scanf("%d", &nivel);
    }   
    //Atribuindo ptotal de temtativas com base nas #defines do nivel
    switch(nivel) {
        case 1: 
            totaldetentativas = TENTATIVAS_FACIL;
            break;
        case 2:
            totaldetentativas = TENTATIVAS_MEDIO;
            break;
        default:
            totaldetentativas = TENTATIVAS_DIFICIL ;
            break;
    }
 
    // loop principal do jogo
    for(int i = 1; i <= totaldetentativas; i++) {
 
        printf("-> Tentativa %d de %d\n", i, totaldetentativas);
 
        printf("Chute um número entre %d e %d: ", limiteInferior, limiteSuperior);
        scanf("%d", &chute);
 
        // tratando chute de numero negativo
        if(chute < 0 || chute < limiteInferior || chute > limiteSuperior) {
            printf("Você não pode chutar números negativos e deve está no limite entre %d e %d \n", limiteInferior, limiteSuperior);
            i--;
            continue;
        }
 
        // verifica se acertou, foi maior ou menor
        acertou = chute == numerosecreto;
 
        if(acertou) {
            break;
        } else if(chute > numerosecreto) {
            printf("\nSeu chute foi maior do que o número secreto!\n\n");
        } else {
            printf("\nSeu chute foi menor do que o número secreto!\n\n");
        }
 
        // calcula a quantidade de pontos
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
 
    // imprimindo mensagem de vitoria ou derrota
    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {
 
        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");
 
        printf("\nVocê perdeu! Tente novamente!\n\n");
    }
    printf("\nDeseja jogar novamente?\n\nDigite 1 para sim ou precione qualquer tecla para sair. ");
    scanf("%d", &novamente);
    printf("\n");
    
    }while(novamente == 1);
    
    printf("\nObrigado por jogar o jogo da adivinhação!");
}