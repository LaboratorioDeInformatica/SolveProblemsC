#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	//imprime cabeçalho do jogo
	printf("*****************************************\n");
	printf("* Bem vindo ao nosso jogo de advinhacao *\n");
	printf("*****************************************\n");
	
	
	int segundos=time(0);
	srand(segundos);
	
	int numero = rand();
	
	int numerosecreto = numero % 100 ;

	int chute ;
	
	int tentativas = 1 ;
	
	double pontos = 1000;
	double pontosperdidos ;
	
	
	while(1){
		printf("Tentativa  %d \n", tentativas);
		printf("Quel eh seu chute?\n" );
		scanf("%d", &chute);
		int acertou =chute == numerosecreto; 
		int menor = chute < numerosecreto ;
		
		if(chute < 0 ){
			printf("Nao pode  digitar um numero negativo\n");
			continue;
		}
		
		if(acertou){
			printf("Parabens, voce acertou\n");
			printf("Voce acertou na %d tentativa\n", tentativas);
			break;
		}else if(menor){
				printf("Infelizmente, voce errou\n");
				printf("O numero digitado é menor que o numero secreto\n");
			}else{
				printf("Infelizmente, voce errou\n");
				printf("O numero digitado é maior que o numero secreto\n");
			}
		
		printf("Seu chute foi %d\n", chute);
		tentativas++;
		pontosperdidos = abs(chute-numerosecreto) / 2.0;
		
		pontos = pontos - pontosperdidos;
		
		
	}
	
	printf("Total de pontos %.2f", pontos);
}