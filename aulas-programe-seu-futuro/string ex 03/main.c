/******************************************************************************
Convertendo strings para maiusculo e minusculo carater por caracter

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main()
{
    char letras[50];
    char convert[50];
    int i = 0, escolha = 0;
    
    i = 0;    
    printf("Digite uma frase: ");
    scanf("%50[^\n]", letras);
    
    do{ 
        printf("\nDigite 1 para maiusculo ou 2 para minusculo: ");
        scanf("%d", &escolha);
        limparBufferEntrada();
        
        switch (escolha){
            case 1:
                while(letras[i] != '\0'){
                    convert[i] = toupper(letras[i]);
                    i++;
                }
                convert[i] = '\0';
                printf("\nMaiúsculo %s\n\n", convert);
                break; 
                    
            case 2:
                while(letras[i] != '\0'){
                    convert[i] = tolower(letras[i]);
                    i++;
                } 
                convert[i] = '\0';
                printf("\nMinúsculo %s\n\n", convert);
                break;
            default:
                printf("\nOpção invalida!!\n");
                    
        }
    }while(escolha != 1 && escolha != 2);
    return 0;
}    
    
    
