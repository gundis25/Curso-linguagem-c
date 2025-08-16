/******************************************************************************
Aula 29
Operador unsigned //aumenta o spaço positivo na memoria 
trocar o %d por %u 
limite para o tipo int : 2.147.483.647
short int -> %d ou %hi 
unsigned shot int %hu ou %d 
unsigned long int %lu

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 2147483647;
    
    unsigned int x = 2147483647; // 0 .... 4.294.967.295 mis espaço namemoria para numeros positivos
    //4 * 8 = 32 os 32 bits serão reservados para a representação dos numeros não senmdo nessario o 32º bit para representaro sinal (0, 1)
    //Todos os 4 bits na memoria serão reservados para apenas numeos positivos
    
    short int b = 55000;
    
    unsigned short int y = 55000;
    
    long int z = 2147483648;
    
    unsigned long int w = 2147483648;
    
    
    printf("\n\ta = %d \n", ++a);
    
    printf("\n\tx = %u \n", ++x);
    
    printf("\n\tb = %hi \n", b);
    
    printf("\n\ty = %hu \n", y);
    
    printf("\n\ty = %d \n", y);
    
    printf("\n\tz = %d \n", z);
    
    printf("\n\tw = %lu \n", w);

    return 0;
}
