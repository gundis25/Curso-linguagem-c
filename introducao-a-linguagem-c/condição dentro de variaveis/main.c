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
    // Caso a chute seja igual a numerosecreto a variavel acertou retorna o valor 1 (veradeiro)
    //caso contrario recebe 0 (falso).
    int acertou = chute == numerosecreto;
    if(acertou){//Se acertou receber o valor 1 (verdadeiro) entra na condição.
        printf("Parabéns voçê acertou!\n");
    } else{
        int maior = chute > numerosecreto; 
        if(maior){
            printf("Seu chute foi maior do que o numero secreto!\n");
        }else{
            printf("Seu chote foi menor do que o numero secreto!\n");
        }    
    }

    return 0;
}