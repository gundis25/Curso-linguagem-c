/******************************************************************************
Aula 152 Como converter numero em texto
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {

    int tam;
    char str1[10] = {"%"}, str2[10];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    //scanf("%c");

    //sprintf(str2, "%d[^\n]", tam);
    snprintf(str2, 10, "%d[^\n]", tam);
    strcat(str1, str2);

    printf("%s\n", str2);

    char palavras[tam];
    printf("Digite uma frase: ");
    scanf(str1, palavras);
    printf("%s\n", palavras);

    return 0;
}