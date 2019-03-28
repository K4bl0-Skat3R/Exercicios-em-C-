#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 4
//exercicio 7
// Fazer um programa que lê dois números m,n
// e calcula a soma dos números pares
// entre o intervalo exclusivo de m e n .
// Exemplo, para m=6e n =15,
// a soma dos números pares entre 6 e 15 é soma =8+10+12+14=44.
//PS://foi acrescentado um decremento caso n1 for menor que n2
int main() {
    int n1,n2;
    int soma =0;

    printf("digite 2 numeros: ");
    scanf("%d%d",&n1,&n2);
    for(int i=n1;i<=n2;i++) {
        if (i % 2 == 0) {
            soma = soma + i;
        }
    }
        if(n1>n2){
            for(int i=n1;i>=n2;i--){
                if(i %2==0){
                    soma = soma + i;
                }
        }
    }
printf(" a soma dos numeros pares entre %d e %d eh %d",n1,n2,soma);

    return 0;
}