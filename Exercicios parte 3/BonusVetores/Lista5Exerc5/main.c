#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 5

//exerc5 bonus
//Uma loja comercializa sete tipos de produtos.
// Fazer um programa que lê os preços dos produtos em um vetor e
//a quantidade de cada produto em outro vetor.
//Depois o programa deve exibir a quantidade em valor de cada produto e
// a quantidade total em valor de todos os produtos.


int main() {
    int  quantProd=7,i;
    float total=0.0;
//1º vetor  preco
    float vetor[quantProd];

    for (i = 0; i < quantProd; i++) {

        printf("qual o valor do %do produto? ", i + 1);

        scanf("%f", &vetor[i]);
      //somar valores
        total =total +vetor[i];

    }
    printf("\n========Valor dos produtos===========\n");
    //  valores

    for (i = 0; i < quantProd; i++) {

        printf(" O valor do %do  produto eh: %.2f\n",i+1,vetor[i]);

    }
    printf("\n");

    //2º vetor  preco

    for (i = 0; i < quantProd; i++) {

    }
    //  quantidade total em valor de todos os produtos.
    printf("\n========Valor total===========\n");
    printf("A  quantidade total em valor de todos os produtos eh:%.2f",total);
    printf("\n\n========Informacao extra===========");
    printf("\n qtd produtos existentes eh: %.d \n",i);
    return 0;
}