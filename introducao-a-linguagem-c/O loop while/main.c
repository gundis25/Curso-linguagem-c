#include <stdio.h>

int main() {
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n");

    int numerosecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1; // Inicializa a variável tentativas

    while (!ganhou) { // Loop até o jogador acertar retornar 1
        //O ! antes do ganhou significa não ganhou
        printf("Qual é o seu %dº chute? ", tentativas);
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos.\n");
            continue; // Volta para o início do loop
        }

        printf("Seu %dº chute foi %d\n", tentativas, chute);

        if (chute == numerosecreto) {
            printf("Parabéns! Você acertou!\n");
            ganhou = 1;// Se a condição for verdadeira a variavel ganhou recebe o valor 1 interropendo o loop
        } else if (chute > numerosecreto) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }

        tentativas++; //incrementa a variável tentativa em +1
    }

    return 0;
}
