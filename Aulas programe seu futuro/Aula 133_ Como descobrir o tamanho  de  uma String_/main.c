/******************************************************************************
Aula 133: Como descobrir o tamanho  de  uma String?
\0 = (NULL)

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, tam;
    char palavras[55] = {"Oi. Vamos aprender na programar com a linguagem c?"};
    
    printf("Digite seu nome: ");
    fgets(palavras, 30, stdin);//file/get/String 
   
    i = 0;
//enquanto elemento do vetor for diferente do fim de String    
   while(palavras[i] != '\0'){ 
        if(palavras[i] == '\n') //se palavras for igual a enter.
            palavras[i] = '\0'; //Recebe o fim de String
        i++;    
   }
    
    
    i = 0;
    while(palavras[i] != '\0'){//\0 -> fim da String codigo - decimal 10 tabela ascii
        //printf("%d = %d\n", i, palavras[i]);
        //printf("%d = %c\n", i, palavras[i]);
        tam++;//Variavel para contar um String
        i++;
    }
    printf("Tamamnho: %d\n", tam);//Imprime na tela o tamnho da string
    
    return 0;
}