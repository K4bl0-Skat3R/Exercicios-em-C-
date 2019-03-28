#include <stdio.h>

//
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista4
//4.Fazer um programa que lê n e imprime a tabuada de n .
int main() {
    int n1;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&n1);
    for(int i=1;i <= n1;i++){
        for(int j=1;j<=n1;j++){
            printf("%d * %d = %d\n", i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}