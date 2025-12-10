#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[50]= {"Programa para copiar uma string"};
    char str2[50];
    int i = 0;
    
    printf("Digite uma frase: ");
    scanf("%50[^\n]", str1);

    printf("\nStr1 = %s", str1);

    while (str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }    
    str2[i] = '\0';

    printf("\nStr2 = %s", str2);
    
    printf("\n%d", strlen(str1));
    printf("\n%d", strlen(str2));
    return 0;
}
