#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
        Aula 165: Calcular o tempo de execução do algoritmo de FIBONACCI recursivo e iterativo.

        Escrito por Wagner Gaspar
        Março de 2021
*/
/*
        Função recursiva para calcular um termo n da sequência de fibonacci
        Como a sequência cresce muito rápido, está sendo usado o operador long para que o tipo int ocupe 8 bytes.
*/
long long int fiboR(int n){
    if(n == 1)
        return 0;
    else{
        if(n == 2)
            return 1;
        else
            return fiboR(n - 1) + fiboR(n - 2);
    }
}

/*
        Função iterativa para calcular um termo n da sequência de fibonacci
        Como a sequência cresce muito rápido, está sendo usado o operador long para que o tipo int ocupe 8 bytes.
*/
long long int fiboI(int n){
    long long int a = 0, b = 1, c;
    int i = 2;
    if(n == 1)
        return a;
    else{
        if(n == 2)
            return b;
        else{
            while(i < n){
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            return c;
        }
    }
}

int main () {

    int n = 45;
    time_t tIni, tFim;

    tIni = time(NULL); // obtem a hora do computador
    printf("Fibonacci iterativo: %lld\n", fiboI(n));
    tFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni)); // diferença entre a hora de início e a hora de fim

    tIni = time(NULL);
    printf("Fibonacci recursivo: %lld\n", fiboR(n));
    tFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni));

    return 0;
}