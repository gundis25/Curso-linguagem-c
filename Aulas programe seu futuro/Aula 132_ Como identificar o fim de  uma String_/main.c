/******************************************************************************
Aula 132: Como identificar o fim de  uma String?


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char palavras[55] = {"Oi. Vamos aprender na programar com a linguagem c?"};
    
   printf("Digite seu nome: ");
    //scanf("%s", palavras);
    //scanf("%20[ˆ\n]", palavras);
    //gets(palavras);
   fgets(palavras, 30, stdin);//file/get/String 
    /*for(i = 0; i < 55; i++)
        //printf("%d = %c\n", i, palavras[i]);
        printf("%d = %d\n", i, palavras[i]);
    printf("\n");
    */
    i = 0;
    while(palavras[i] != '\0'){//\0 -> fim da String codigo - decimal 10 tabela ascii
        //printf("%d = %d\n", i, palavras[i]);
        printf("%d = %c\n", i, palavras[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}