#include<stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 5

//Bonus Vetores Lista5
//exercicio 8.
//Fazer um programa que lê um vetor de caracteres até for informado
// um caractere de quebra de linha ‘\n’ ou 100 caracteres forem lidos.
// Depois o programa deve exibir o vetor de caracteres.


int main()
{
    int n, i, j;
    printf("Qual o tamanho  do vetor e seus valores\n ");
    scanf("%d ", &n);
    char VetorCaracteres[n][101];

      for (i = 0; i < n; i++) {
        for (j = 0; j < 100; j++) {
            scanf("%c", &VetorCaracteres[i][j]);
            if (VetorCaracteres[i][j] == '\n') break;
        }
    }
    printf("\n\nfoi digitado: \n\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < 100; j++) {
            printf("%c", VetorCaracteres[i][j]);
            if (VetorCaracteres[i][j] == '\n') break;
        }
    }
    return 0;
}