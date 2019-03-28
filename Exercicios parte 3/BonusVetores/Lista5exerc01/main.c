#include<stdio.h>

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

int main()
{
    int n,i,x;

    printf("Qual o tamanho  do vetor: ?\n");
    scanf("%d",&n);
    int vet[n];
    for (int i = 0; i < n; ++i) {
        printf("DIgite o valor da %da posicao do vetor: ",i+1);
        scanf("%d",&vet[i]);
    }


    printf("\n nº a procurar no vector: ");
//inserir o nº a procurar no vector
    scanf("%d",&x);

    i=1; // fiz um contador
//encontrar a posição de x no vetor
    while(vet[i]!=x)
        i++;
//mostrar a posição
    printf("\nencontrado na posicao %d",i);

    return 0;
}