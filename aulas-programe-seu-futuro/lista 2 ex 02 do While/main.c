#include <stdio.h>

void limpar_entrada() { 
     char c; 
     while ((c = getchar()) != '\n' && c != EOF) {} 
    } 
    

int main()
{
    char resp;
    int N = 0;
    int positivo = 0;
    int negativo = 0;
    do{
        printf("DIgite um numero inteiro: ");
        scanf("%d", &N);
        
        if(N > 0){
            positivo = positivo + 1;
        }
        else{
            negativo = negativo + 1;
        }
    
    printf("Deseja continuar S/N? ");
    limpar_entrada(); 
    scanf("%c", &resp);
    
    }while(resp =='s');
    
    printf("Quantidade de numeros positivos : %d", positivo);
    printf("\nQuantidade de numeros negativos : %d", negativo);
    
    return 0;
}