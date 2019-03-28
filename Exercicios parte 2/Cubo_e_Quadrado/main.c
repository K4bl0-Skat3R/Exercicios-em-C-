#include <stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
// imprimir o quadrado
//programa que lê um número inteiro e mostre o seu quadrado e seu cubo.
// Por exemplo, se o número lido for 3, a saída deve ser 9 e 27.


int main(){

    int num1;
   // int quadrado = num1 * num1;
   // int cubo = num1 * num1 * num1;


    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("%d ao quadrado eh %d\n\n",num1,num1*num1);
    printf("%d ao cubo eh %d\n\n",num1,num1*num1*num1);

    return 0;
}