/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite o valor de a de b e de c :\n");
    scanf("%d%d%d", &a, &b, &c);
    
     if(a + b > c && a + c > b && b + c > a){
        printf("\nOs 3 lados forman um triangulo");
    
     if(a == b && b == c) 
        printf("\nO triangulo é equilatero.");
     else if(a == b || a == c  || b == c)
        printf("\nO triangulo é isosteles,");
     
     else
        printf("\nO triangulo é escaleno. ");
    } 
     else
        printf("\nOs tres lados não formam um triangulo");
     

    return 0;
}