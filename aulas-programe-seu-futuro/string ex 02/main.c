#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[50]= {"Programa para copiar uma string."};
    char str2[50];
    int i = 0;
    int tam = 0;

    printf("Str1 = %s", str1);

    while (str1[i] != '\0'){
        tam = tam + 1;
        i++;
    }
    printf("\nTamanho da string = %d", tam);
    tam = tam - 1;
    i = 0;
    while (str1[i] != '\0'){
        str2[tam - i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("\nStr2 = %s", str2);

    return 0;
}
