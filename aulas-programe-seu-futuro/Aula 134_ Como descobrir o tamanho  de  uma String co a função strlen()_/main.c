/******************************************************************************
Aula 134: Como descobrir o tamanho  de  uma String co a função strlen()?
\0 = (NULL)

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam;
    char palavras[55] = {"Oi. Vamos aprender na programar com a linguagem c?"};
    
    printf("Digite seu nome: ");
    fgets(palavras, 30, stdin);//file/get/String 
    
    //tam = strlen(palavras);//guarda o retorno da função strlen() na variavel tam.
    
    //printf("Tamamnho: %d\n", tam);//pode se usar uma variavel para guardar a contagem da string
   
    printf("Tamamnho: %ld\n", strlen(palavras));//Função strlen() direto detro de printf.
    
    return 0;
}