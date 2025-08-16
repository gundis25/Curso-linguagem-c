/******************************************************************************
Aula 147: ""Procedimento" para imprimir um string caracter por caracter
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//função para retornar o tamanho de uma string
// tipo de retorno - indentificador - parametro
int minhaStrlen(char str[]){
    int tam = 0;
    
    while(str[tam] != '\0'){
        tam++;    
    }
    return tam;
}

//Procedimento para imprimir uma string caratceter por caracter
void imprimirString(char palavra[]){
    int i = 0;   
    while(palavra[i] != '\0'){
        printf("%c", palavra[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char vet[20] = {"Ola. Bom dia!"};
    
    printf("strlen: %d\n", strlen(vet));
    printf("minhaStrlen: %d\n", minhaStrlen(vet));//chama a função minhaStrlen
    imprimirString(vet);//chama o procedimento e improme na tela uma string caracter por caracter
    

    return 0;
}