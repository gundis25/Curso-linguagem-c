#include <stdio.h>

int main() { 
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n");

    int numerosecreto;
    numerosecreto = 42;
    
    int chute;
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    printf("Você chutou o número %d!\n", chute);
    
    if(chute == numerosecreto){
        printf("Parabéns voçê acertou!\n");
    } else {
        if(chute > numerosecreto){
        printf("Seu chute foi maior do que o numero secreto!\n");
        }
        if(chute < numerosecreto){
            printf("Seu chute foi menor do que o numero secreto!\n");
        }    
    }

    return 0;
}