/******************************************************************************

Aula 153: Guncções e procedimentos recursivos 
Exemplo: imprimir todos os numeros de n até 0

*******************************************************************************/
#include <stdio.h>

void imprimir(int x){
    if(x == 30)
        printf("%d ", x);
    else{
        //printf("%d ", x);
        imprimir(x + 1);//chamada recursiva
        //Ocomputador vai fazendo um  pilha 
        printf("%d ", x); //Imprimi o desimpilhamento
    }
        
}

int main()
{
    int n; 
    
    printf("Digite um valor menor que 30: ");
    scanf("%d", &n);
    
    imprimir(n);
    
    return 0;
}