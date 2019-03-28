#include <stdio.h>

//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista4

//exercicio 01
//1.Fazer um programa que lê um número inteiro positivo n
// e calcule a soma dos números de 1até n .
// Exemplo, para n =5, soma =1+2+3+4+5=15.
 int main() {
     int n, soma =0;
     printf("digite um numero: ");
     scanf("%d", &n);
     printf("soma = ");
     for (int i = 1; i <= n; i++) {
        printf("%d + ", i);
         soma = soma + i;
     }
     printf(" = %d ", soma);
     return 0;
 }

