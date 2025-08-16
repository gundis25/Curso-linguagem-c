/******************************************************************************
Aula 139: Localizando uma substring com a função strstr()

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char palavra[50] = {"Bom dia simpatia!"};
    char str[] = {"dia"};
    char *ponteiro;
    // procura pela string str dentro da string palavra
    ponteiro = strstr(palavra, str);
    
    // se ponteiro for diferente de null, imprime 3 caracteres (dia)
    if(ponteiro)
        //Aritimetica de ponteiros
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2));
    else
        printf("\nPonteiro nulo.\n");
    return 0;
}
