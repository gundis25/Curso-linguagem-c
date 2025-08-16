#include <stdio.h>

int main() {
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n");

    int numerosecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1; // Inicializa a variável tentativas

    while (!ganhou) { // Loop até o jogador acertar
        printf("Qual é o seu %dº chute? ", tentativas);
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos.\n");
            continue; // Volta para o início do loop
        }

        printf("Seu %dº chute foi %d\n", tentativas, chute);

        if (chute == numerosecreto) {
            printf("Parabéns! Você acertou!\n");
            break;
        } else if (chute > numerosecreto) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }

        tentativas++;
    }

    return 0;
}
