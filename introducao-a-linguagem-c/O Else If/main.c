#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 3

int main() { 
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n");

    int numerosecreto;
    numerosecreto = 42;
    
    int chute;
    
    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){//loop for i++ é incrementado i = i + 1
        printf("Qual é o seu %d° chute? ",i);// %d especifica que um inteiro decimal deve ser lido
        scanf("%d", &chute);// &chute é o endereço de memoria da variavel "chute"
        printf("Seu %d° chute foi %d\n", i,chute); 
   
        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        if(acertou) {
        printf("Parabéns! Você acertou!\n");
        break;
        } else if(maior) {
        printf("Seu chute foi maior do que o número secreto!\n");
        } else {
        printf("Seu chute foi menor do que o número secreto!\n");
        }
    } 
    return 0;
}  