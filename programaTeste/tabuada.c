#include<stdio.h>

int main(){

int numero;

	printf("*****************************************\n");
	printf("*       Bem vindo a Tabuada             *\n");
	printf("*****************************************\n");

	printf("Digite um numero para tabuada\n");
	scanf("%d", &numero);
	
	
for(int i = 0 ; i <= 10 ; i++){
	printf("%d X %d = %d \n", numero, i, numero * i);
}

}