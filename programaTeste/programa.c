#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

	int acertou = 0;
	int segundos=time(0);
	srand(segundos);
	
	int numero = rand();
	
	int numerosecreto = numero % 100 ;
	
	int numerotentativas ;

	int chute ;
	
	int tentativas = 1 ;
	int nivel ;
	double pontos = 1000;
	double pontosperdidos ;
	
	//imprime cabeçalho do jogo
	printf("*****************************************\n");
	printf("* Bem vindo ao nosso jogo de advinhacao *\n");
	printf("*****************************************\n");
	
	printf("Escolha um nivel de dificuldade\n");
	printf("1- facil , 2-medio , 3- difcil\n");
	printf("Escolha:");
	scanf("%d",&nivel);
	
	switch(nivel){
	
		case 1:
		numerotentativas = 10 ;
		break;
		
		case 2 :
		numerotentativas = 7 ;
		break;
		
		default :
		numerotentativas = 5 ;
		break;
	}
	

	for(int i = 0 ; i< numerotentativas ; i++){
		printf("Tentativa  %d \n", tentativas);
		printf("Quel eh seu chute?\n" );
		scanf("%d", &chute);
		 acertou =chute == numerosecreto; 
		int menor = chute < numerosecreto ;
		
		if(chute < 0 ){
			printf("Nao pode  digitar um numero negativo\n");
			continue;
		}
		
		if(acertou){
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
	
		if(acertou){
		printf("Parabens, voce acertou\n");
		printf("Voce acertou na %d tentativa\n", tentativas);
		printf("Total de pontos %.2f", pontos);
		}else{
			printf("Infelizmente voce perdeu\n");
		}
}