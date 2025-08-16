/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 4
int main()
{
    int l, c, soma, total;
    int falha =0;
    int mat[tam][tam] = {16,3,2,13,5,10,11,8,10,6,7,12,4,15,14,1};
    
   /* srand(time(NULL));
    
    printf("Matriz gerada:\n");
    for(l = 0; l < tam; l++){
        for(c = 0; c <= tam; c++){
            mat[l][c] = rand() % 100;
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }
    printf("\n");
    */ 
    soma = 0;
    for(l = 0; l < tam; l++){
        soma += mat[l][l];
    }
    printf("Diagonal prioncipal = %d", soma);
    total = soma;
    
    soma = 0;
    for(l = 0; l < tam; l++){
        soma += mat[l][tam - 1 - l];
    }
    printf("\nDiagonal secundaria= %d", soma);
    
    if(total != soma)
        printf("\nDiagonal secundaria é diferente!");
    
    for(l = 0; l < tam; l++){
        soma = 0;
        for(c = 0; c < tam; c++)
            soma += mat[l][c];
        printf("\nLinha %d = %d", l, soma);
        
        if(total != soma){
            printf("\nA linha %d é diferente!", l);
            falha++;
        }
    }
    
    for(c = 0; c < tam; c++){
        soma = 0;
        for(l = 0; l < tam; l++)
            soma += mat[l][c];
        printf("\nColuna %d = %d", c, soma); 
        
        if(total != soma){
            printf("\nA coluna %d é diferente!", c);
            falha++;
        }
    }
    
    if(falha){
        printf("\nA matriz não é um quadrado mágico");
    }else
        printf("\nA matriz é um quadrado mágico");
    
    return 0;
}