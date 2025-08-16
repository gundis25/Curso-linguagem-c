#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 3//definindo parametro limeite da estrutura "for"

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
        if(chute < 0) {
        printf("Você não pode chutar números negativos\n");
        i--;//Esta linha garante que o usuário não tenha uma tentativa gasta se ele digitar um número negativo
        continue;//É uma palavra-chave que faz com que o loop atual seja interrompido e a próxima iteração seja iniciada
        //retorna ao loop for decrementando a variavel i em -1 voltando a tentativa atual.
        }
        if(acertou) {
        printf("Parabéns! Você acertou!\n");
        break;
        
        } else if(maior) {
        printf("Seu chute foi maior do que o número secreto!\n");
        } else {
        printf("Seu chute foi menor do que o número secreto!\n");
        }
         
    } 
        if(NUMERO_DE_TENTATIVAS >= 3){
                printf("GAME OVER!");
        }
    return 0;
}  