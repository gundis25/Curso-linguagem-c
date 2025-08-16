# include <stdio.h>
int main() {
	printf("************************************\n");
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("************************************\n");

	int chute; 
	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Voçê chutou o numero %d! ", chute);
	return 0;
}