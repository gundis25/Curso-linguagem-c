#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[500];
    int i = 0;
    
    printf("Digite uma frase:");
    fgets(palavras, 500, stdin);
    //removendo o enter do final da string
    while(palavras[i] != '\n')
        i++;
    //puxando o '\0 uma posição no lugar do enter    
    palavras[i] = '\0';
    i = 0;
    //imprimindo o conteudo da string 
    while(palavras[i] != '\0'){
        printf("\t%d=\t%c\t%d\n", i, palavras[i], palavras[i]);
        i++;
    }
    palavras[i] = '\0';
    printf("\t%d= %c\t%d", i , palavras[i], palavras[i]);
    return 0;
}