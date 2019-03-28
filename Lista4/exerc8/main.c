#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 4
//exercicio 8
//Fazer um programa que lê dois números m,n e exibe
// os múltiplos de m menores ou iguais a n ,

int main ()
{
    int m, n, i;
    printf ("Digite dois numeros\n");
    scanf ("%d %d",& m, & n);

    i = n - (n % m);
    while(i>=m) {
        printf ("%d, ",i);
        i-=m;
    }

    printf(" 1, 0\n");

    return 0;
}

