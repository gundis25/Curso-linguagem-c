/******************************************************************************
Aula 146: Criiando uma função que retorna o tamanho de um string em c.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// tipo de retorno - indentificador - parametro
int minhaStrlen(char str[]){
    int tam = 0;
    
    while(str[tam] != '\0'){
        tam++;    
    }
    return tam;
}

int main()
{
    char vet[20] = {"Ola. Bom dia!"};
    
    printf("Digite algo: ");
    scanf("%20[^\n]", vet);
    
    printf("strlen: %d\n", strlen(vet));
    printf("minhaStrlen: %d\n", minhaStrlen(vet));
    

    return 0;
}