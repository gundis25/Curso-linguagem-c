/******************************************************************************
Aula 155: Fazer uma função que calcula e retorna o fatorial de n.
4! = 4 * 3 * 2 * 1 + 24
1! e 0! = 1

*******************************************************************************/
#include <stdio.h>


int fatorial(int n){
    if(n  == 0 || n == 1){//caso base da recurção
        return 1; // retorna para a chamada recursiva 3
    }else{
        // 5 * 4!
        return n * fatorial( n - 1);
        /*
        salva na pilha.
        
        chamada da recurciva 1 -> n = 4       
        chamada da recurciva 2 -> n = 3 
        chamada da recurciva 3 -> n = 2 
        chamada da recurciva 4 -> n = 1 
        
        desenplilhando.
        return  rechamada da recurciva 3 -> 2 * 1 = 2 retorna para a chamada recursiva 2
               rechamada da recurciva 2 -> 3 * 2 = 6 retorna para a chamada recursiva 1
               rechamada da recurciva 1 -> 4 * 6 = 24 retorna para a chamada na função main
               
         
        */
    }    
}
int main()

{
    int n;
    
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);
    
    printf("\nFatorial de %d: %d\n", n, fatorial(n));

    return 0;
}