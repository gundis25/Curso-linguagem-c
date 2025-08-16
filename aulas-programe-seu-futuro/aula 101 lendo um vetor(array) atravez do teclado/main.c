/******************************************************************************

Aula 101: Como preencher um vetor atravez do teclado.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int num2[10];
    
    //printf("Quantos posições terá o vetor? ");
    //scanf("%d", &num2[]);
    
    for(i = 0; i < 10; i++){
            printf("Digite o valor da posição %d: ", i);
        scanf("%d", &num2[i]);
    }  
    
    printf("\n\n");
    for(i = 0; i < 10; i++)
        printf("%d ", num2[i]);
    printf("\n\n");
    return 0;
}