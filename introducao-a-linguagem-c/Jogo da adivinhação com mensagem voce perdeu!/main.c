
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 
int main() {
    printf("************************************\n");
    printf("* Bem vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");
 
    int chute, i, nivel;
    int acertou = 0;
    int totaldeTentativas;
    double pontos = 1000;
    
    
    srand(time(0));
    int numerosecreto = rand() % 100;
    
    printf("\nQual o nivel de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n");
    scanf("%d", &nivel);
    
    while(nivel < 1 || nivel > 3){
        printf("Opção inválida");
        printf("\nQual o nivel de dificuldade?\n");
        printf("(1) Fácil (2) Médio (3) Difícil\n");
        scanf("%d", &nivel);
    }    
    switch(nivel){
        case 1:
            totaldeTentativas = 20;
            break;
        case 2:
            totaldeTentativas = 15;
            break;
        default:
            totaldeTentativas = 6;
            break;
        }
    
    printf("qual seu chute? ");
    
    for(i = 1; i <= totaldeTentativas; i++) {
 
        printf("\nTentativa %d de %d\n ", i, totaldeTentativas );
        scanf("%d", &chute);
 
        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            i--;
            continue;
        }
 
        printf("Seu %do. chute foi %d\n",i , chute);
 
        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
 
        if(acertou) {
            break;
        } else if(maior) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }
 
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    
    if(acertou){
        printf("Parabéns! Voçê acertou!\n");
    }else{
        printf("Você perdeu! Tente novamente!\n");
    }
 
    printf("\nVocê fez %.2f pontos", pontos);
    printf("\nObrigado por jogar!\n");
 
}