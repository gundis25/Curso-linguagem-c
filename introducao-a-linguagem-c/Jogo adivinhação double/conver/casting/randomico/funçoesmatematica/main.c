#include <stdio.h>
#include <stdlib.h>
#include <time.h>//Faz a chamada da função "time()"
 
#define NUMERO_DE_TENTATIVAS 3//Definição de macros onde pode-se usar-la por todo codigo caso seja necessario 
//muda-la basta alterar a definição da macro isso tona o codigo mais legivél
 
int main() {
    printf("************************************\n");
    printf("* Bem vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");
 
    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;//define a quantidade maxima de pontos
 
    srand(time(0));
    int numerosecreto = rand() % 100;
 
    while(!acertou) {
 
        printf("Qual é o seu %dº. chute? ", tentativas);
        scanf("%d", &chute);
 
        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;
        }
 
        printf("Seu %dº. chute foi %d\n", tentativas, chute);
 
        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
 
        if(acertou) {
            printf("Parabéns! Você acertou!\n");
        } else if(maior) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }
 
        tentativas++;
 
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;//abs converte caso o numeros for negagtivo
        pontos = pontos - pontosperdidos;
    }
 
    printf("Você fez %.2f pontos\n", pontos);
    printf("Obrigado por jogar!\n");
 
}