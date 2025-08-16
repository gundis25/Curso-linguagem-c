/******************************************************************************
        Aula 104: Como gerar numeros aleatorios dentro de um intervalo
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i;
    int num2[40];
    
    srand(time(NULL));//A função srand recebe uma parametro que se torna uma semente
    //a função time cria uma semente a partir da hora do computador
    for(i = 0; i < 40; i++)
        num2[i] = 1 + rand() % 99;// A função rand tem uma semente fixa prè programada 
    // Adicionando  + 1 antes da função rand eu estou pedindo para ignorar o 0 
    // Jà usando o resto da divisão após a função estou passando um intervalo no 
    //qual eu quero que seja gerado os numeros aleatorios.
    printf("\n\n");
    for( i = 0; i < 40; i++)
        printf("%d ", num2[i]);
    printf("\n\n");    

    return 0;
}