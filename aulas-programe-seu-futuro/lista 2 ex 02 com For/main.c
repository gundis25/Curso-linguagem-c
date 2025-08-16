#include <stdio.h>

int main()
{
    int i, quantidade;
    int N;
    int positivo = 0;
    int negativo = 0;
    printf("Quantos numeros vai ser digitado? ");
    scanf("%d", &quantidade);
    for(i = 0; i < quantidade; i++){
        printf("DIgite o %d numero inteiro: ", i+1);
        scanf("%d", &N);
        
        if(N > 0){
            positivo = positivo + 1;
        }
        else{
            negativo = negativo + 1;
        }
        
    }
    
    printf("Quantidade de numeros positivos : %d", positivo);
    printf("\nQuantidade de numeros negativos : %d", negativo);
    
    return 0;
}