/******************************************************************************
Aula 141: Como dividir uma string com a função strtok() tokenizar 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[50] = {"Bom!dia.simpatia Bom dia"};
    char *pt;
    
    pt = strtok(palavra, "!. " );
    
    while(pt){
        printf("token: %s\n", pt);
        //usar NULL para dizer que quer continuar de onde se parau ou seja a proxima ocorrencia
        pt = strtok(NULL, "!. " );
    }
    

    return 0;
}