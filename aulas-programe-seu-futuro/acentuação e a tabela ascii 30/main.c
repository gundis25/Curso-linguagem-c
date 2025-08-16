/******************************************************************************
Aula 30
Tabela ascii e acentuação 
1 byte (8 bits) -> -128 até 127
unsigned 1 byte -> 0 até 255

9 è o caractere de tabulação \t 
10 é o caractere de nova linha \n (enter)
65 é a letra A maiuscula
66 é a letra B maiuscula
90 é a letra E maiuscula
1 = setlocale (LC_AL, NULL);//padrão da liguagem C 
2 = setlocale (LC_AL, "");//padrão do sistema operacional
3 = setlocale (LC_AL, "Portuguese");//portugues brasileiro 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);//padrao linguagem c
    
    printf("Coração\n");
    
    setlocale(LC_ALL, "");//apenas sistema operacional em portugues
    
    printf("Coração\n");
    
    setlocale(LC_ALL, "portuguese");//portugues brasisileiro
    
    printf("Coração");
    
    printf("%s\n", setlocale(LC_ALL, "portuguese") );
    
    printf("Coração");

    return 0;
}