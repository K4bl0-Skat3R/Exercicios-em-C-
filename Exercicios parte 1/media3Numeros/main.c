#include <stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//programa que lê três números reais e mostre sua média aritmética.
int main() {
    int n1, n2, n3;
    float media;
    printf ("\nDigite o primeiro numero: ");
    scanf ("%d",&n1);
    printf ("\nDigite o segundo numero: ");
    scanf ("%d",&n2);
    printf ("\nDigite o terceiro numero: ");
    scanf ("%d",&n3);
    media=(float)(n1+n2+n3)/3;
    printf ("\nA media eh %.2f\n", media);

    return 0;
}