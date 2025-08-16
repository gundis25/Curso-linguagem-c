/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;
    printf("Digite sexo (f, F, m, M), idade, peso e altura:\n");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
    
    printf("Sexo: %c\nIdade: %d anos\nPeso: %.1f Kg\nAltura: %.2f\n", sexo, idade, peso, altura);
    
    return 0;
}