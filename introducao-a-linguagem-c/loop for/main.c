#include <stdio.h>

int main() { 
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n");

    int numerosecreto;
    numerosecreto = 42;
    
    int chute;
    
    for(int i = 1; i <= 3; i++){//loop for i++ é incrementado i = i + 1
        printf("Qual é o seu %d° chute? ",i);// %d especifica que um inteiro decimal deve ser lido
        scanf("%d", &chute);// &chute é o endereço de memoria da variavel "chute"
        printf("Seu %d° chute foi %d\n", i,chute); 
        int acertou = chute == numerosecreto;
        if(acertou){
    
           printf("Parabéns voçê acertou!\n");
           break;// para o programa caso a condição seja verdadeira
        } else{
            int maior = chute > numerosecreto;
            if(maior){
                printf("Seu chute foi maior do que o numero secreto!\n");
            }else{
                printf("Seu chote foi menor do que o numero secreto!\n");
            }    
            
        }
    }
    printf("Obrigado por jogar");
    return 0;
}   