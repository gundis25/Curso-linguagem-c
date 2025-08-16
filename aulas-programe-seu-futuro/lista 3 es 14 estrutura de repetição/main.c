/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, quant_func;
    float media, salario, soma_salario = 0,velor,maior_valor = -1, menor_valor = 999999;
    
    do{
        printf("Quantos funcionarios há na empresa?");
        scanf("%d", &quant_func);
        if(quant_func <= 0)
            printf("A quantidade deve ser maior que zero\n");
    }while(quant_func <= 0);
    
    for(i = 1; i <= quant_func; i++){
        printf("Digite o salario do funcionário: ");
        scanf("%f", &salario);
        soma_salario += salario;
        
        if(salario > maior_valor){
            maior_valor = salario;
        }
        
        if(salario <= menor_valor){
            menor_valor = salario;   
        }
    }
     media = soma_salario / quant_func;
     printf("Média salarial da emoresa: %.2f", media);
     printf("\nMaior salário: %.2f", maior_valor);
     printf("\nMenor salário: %.2f", menor_valor);
   
        

    return 0;
}