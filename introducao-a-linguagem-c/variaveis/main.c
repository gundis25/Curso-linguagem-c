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

    return 0;
}