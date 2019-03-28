#include<stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista3 - exercico 2
//2. Fazer um programa que lê um número e informe se é positivo, negativo ou igual a zero.

//


int main(){

	int num1;


  printf("Digite um numero: ");
  scanf("%d",&num1);


	if(num1 >0){
		printf("%d numero positivo\n",num1);
	}
		else if(num1 == 0) {
		printf("%d o numero igual a zero\n", num1);
	}
		else if(num1 < 0) {
		printf("%d o numero eh negativo\n", num1);
	}

	return 0;
}