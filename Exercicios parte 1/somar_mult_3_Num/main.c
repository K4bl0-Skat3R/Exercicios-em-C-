#include <stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//programa que lê três números inteiros e mostre a soma desses três números
// e também a multiplicação desses três números

int main(){

	int num1, num2, num3,soma,mult;

  printf("Digite primeiro numero: ");
  scanf("%d",&num1);
  printf("Digite o segundo numero: ");
  scanf("%d",&num2);
  printf("digite o terceiro numero: ");
  scanf("%d",&num3);

    soma= num1+num2+num3;
  printf("%d + %d + %d = %d\n\n",num1, num2, num3,soma);
    mult= num1*num2*num3;
    printf("%d * %d * %d = %d\n\n",num1, num2, num3,mult);

	return 0;
}