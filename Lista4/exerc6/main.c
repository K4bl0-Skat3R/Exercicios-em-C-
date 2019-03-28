#include <stdio.h>
//Aluno Genilson
//Lista 4
//exerc 6
// Fazer um programa que lê um número inteiro n ,
// seguido de n pares de números reais,
// que são um valor e o seu peso,
// e calcule a média ponderada dos n valores dados seus pesos.
int main() {

    int n1;
    float numerador =0,denominador =0,media,peso,valor;

    printf("digite a quantidade de notas: ");
    scanf("%d",&n1);

    for (int i = 1; i<=n1 ; i++) {
        printf ("\nDigite o peso e o valor: ");
        scanf ("%f%f",&peso,&valor);
        numerador += peso * valor;
        denominador += peso;
    }
      media = numerador / denominador;
    printf ("\nO valor da media ponderada eh %.2f\n", media);

    return 0;
}
