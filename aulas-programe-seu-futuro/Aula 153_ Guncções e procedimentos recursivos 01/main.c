/******************************************************************************

Aula 153: Guncções e procedimentos recursivos 
Exemplo: imprimir todos os numeros de n até 0
*******************************************************************************/
#include <stdio.h>

void imprimir(int x){
    if(x == 0)
        printf("%d ", x);
    else{
        //printf("%d ", x);
        imprimir(x - 1);//chamada recursiva a função chama a si mesma
        //o computador vai fazendo um pilha 
        printf("%d ", x);//imprimi o desimpilhamento
        //Apos desempilhar o programa volta para a chamada do procedimento no main
    }
        
}

int main()
{
    int n; 
    
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);
    
    imprimir(n);
    
    return 0;
}