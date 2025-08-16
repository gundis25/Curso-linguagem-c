/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    printf("****** Calculadora IMC ******\n\n");

    float peso, altura;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    float IMC = peso / (altura * altura);

    printf("\nIMC = %.2lf\n", IMC);

    if (IMC < 18.5) {
        printf("\nAbaixo do peso!");
    } else if (IMC < 25) {
        printf("\nPeso Normal!");
    } else if (IMC < 30) {
        printf("\nSobrepeso!");
    } else if (IMC < 35) {
        printf("\nObesidade grau 1!");
    } else if (IMC < 40) {
        printf("\nObesidade grau 2!");
    } else {
        printf("\nObesidade grau 3!");
    }

    return 0;
}