/******************************************************************************
Aula 129: Lendo uma String com a função scanf().
*Por padrao scanf em String vai ler o conteudo até encotrar um espaço.
* o scanf não leva em consideração o tamnho do seu vetor ele acaba preenchendo 
* todo ele e o que sobrar ele vai alocar na memoria correndo o risco de sobrescrever 
* outro dado já alocado na memoria.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavras[20];
    
    printf("Digite seu nome: ");
    //scanf("%s", palapalavr
    
    //Esta linha de codigo ler uma string com tamanho 20 e o que está entre colchetes faz com que 
    //tudo que é digitado seja salvo até que a tecla enter seja digitada
    scanf("%20[^\n]", palavras);
    
    printf("%s\n\n", palavras);

    return 0;
}