#include <stdio.h>
//
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista4

//exercicio 03
//3.Fazer um programa que lê n números inteiros e,
// para cada um deles, exibe o antecessor,
// o sucessor, o dobro e o triplo.

int main() {

    int n1;
    printf("digite um numero inteiro: ");
    scanf("%d",&n1);
    printf("vc digitou o numero %d\n",n1);
    printf("O antecessor de %d eh: ",n1);
    printf("%d\n",--n1);
    printf("O sucessor de %d eh: ",n1);
    printf("%d\n",++n1);
    printf("O dobro de %d eh: ",n1);
    printf("%d\n",n1*2);
    printf("O triplo de %d eh: ",n1);
    printf("%d",n1*3);
    return 0;
}