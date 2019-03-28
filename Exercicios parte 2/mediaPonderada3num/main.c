#include <stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//programa que lê três números e seus respectivos pesos e mostre sua média ponderada.
// considerando peso 1, 2, 3, e 4.
int main() {

            int n1, n2, n3, n4;
            float media;
            printf ("\nDigite o primeiro numero: ");
            scanf ("%d",&n1);
            printf ("\nDigite o segundo numero: ");
            scanf ("%d",&n2);
            printf ("\nDigite o terceiro numero: ");
            scanf ("%d",&n3);
            printf ("\nDigite o quarto numero: ");
            scanf ("%d",&n4);
            media=(float)(1*n1+2*n2+3*n3+4*n4)/10;
            printf ("\nO valor da media eh %.2f\n", media);
    return 0;
}