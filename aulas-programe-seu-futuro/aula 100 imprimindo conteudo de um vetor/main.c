/******************************************************************************
aula 100
Como imprimir o conteúdo de um vetro (array)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int num2[] = {1,5,9,15,43};// vetor de 5 posições
    char vogais[5] = {'a','e','i','o','u'};// nos vetores de char as letras devem ser envolvidos pos aspas simples
    float notas[3] = {7.5,8.3,9.5};
    
    for(i = 0; i < 5; i++)
        printf("%d ", num2[i]);
        
    printf("\n\n");    
    for(i = 0; i < 5; i++)
        printf("%c ", vogais[i]); 
    
    printf  ("\n\n");  
    for(i = 0; i < 3; i++)
        printf("%.1f ", notas[i]);    

    return 0;
}
