#include <stdio.h>

//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 5

//Vetores
//exercicio 1.
//Fazer um programa que lê um vetor de tamanho informado pelo usuário e
//um número x. O programa deve exibir o
//índice em que x se encontra no vetor,
//ou informar que o x não se encontra no vetor, caso contrário.

int main() {
    int x,n,i,notX,posi =1;


    printf("Qual o tamanho  do vetor: ?\n");
    scanf("%d",&n);
    int vet[n];
    for (int i = 0; i < n; ++i) {
        printf("DIgite o valor da %da posicao do vetor: ",i+1);
        scanf("%d",&vet[i]);
    }


    printf("Digite um valor para de x para buscar no vetor: \n");
    scanf("%d", &x);
    for (i = 1; i <= n; i++) {
// verificar se o valor de x é igual ao indice do vetor
        if (x != vet[i]){
             i= 1;

            printf("o valor foi encontrado na posicao %d\n", posi);
        }
            // pra fugir do laço crie um valor qlqer para negar a situcao caso nao exista o valor no indice
            //mas poderia ter feito de outra forma tmbm
            // mas aqui nesse caso o que pede é pra citar  o indice caso exista
        else
            notX = 0;



    }// fazendo a negaçao
    if(notX > 1){
        printf("o valor %d nao se encontra no vetor",x);
    }


    return 0;
}