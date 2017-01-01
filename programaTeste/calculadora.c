#include<stdio.h>

int main(){
	
	int operacao;
	int a ;
	int b ;
	
	double resultado ;
	
	printf("*****************************************\n");
	printf("*       Bem vindo a calculadora         *\n");
	printf("*****************************************\n");
	
	printf("Digite 1 para soma\n");
	printf("Digite 2 para subtracao\n");
	printf("Digite 3 para divisao \n");
	printf("Digite 4 para multiplicacao\n");
	
	printf("Escolha uma operacao matematica\n");
	scanf("%d",&operacao);
	
	printf("Digite um numero\n");
	
	scanf("%d",&a);
	
	printf("Digite um numero\n");
	
	scanf("%d",&b);
	
	
	if(operacao == 1){
		resultado = (double) a + (double) b ;
	}else if(operacao == 2){
		resultado = (double) a - (double) b ;
	}else if(operacao == 3){
		if(b == 0){
			printf("Impossivel realizar esta operacao, divisao por 0\n");
		}else{
			resultado = (double) a / (double) b ;
		}
	}else if(operacao == 4){
		resultado = (double) a * (double) b ;
	}
	
	printf("Resultado = %.2f\n",resultado);
}