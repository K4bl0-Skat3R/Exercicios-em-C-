#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS
//Lista4
//exercicio 5
// Fazer um programa que lê um número inteiro n ,
// seguido de n números reais, e calcula a média
// aritmética dos n números reais.
int main() {
    int n;
    float m;
    float soma =0;
    printf("Digite a quantidade numeros deseja calcular a media ente eles: \n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
       printf("agora digite os numeros que que serao feito a media: \n");
        scanf("%f",&m);
      soma = soma+m ;
    }
    printf("o total eh %.2f: \na media eh %.2f",soma,soma/n);

    return 0;
}