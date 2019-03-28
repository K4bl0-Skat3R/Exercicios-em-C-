#include <stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//Trabalho 01 - digitar 3 numeros; multiplicar o primeiro numero
// pela soma do segundo + o terceiro


int main(){

	int num1, num2, num3;


  printf("Digite primeiro numero: ");
  scanf("%d",&num1);
  printf("Digite o segundo numero: ");
  scanf("%d",&num2);
  printf("digite o terceiro numero: ");
  scanf("%d",&num3);


  printf("%d * %d + %d = %d\n\n",num1, num2, num3,(num2 + num3)*num1);

	return 0;
}