#include<stdio.h>
  // a) lê um número N
 // b) lê N frases, uma em cada linha
// (contendo no máximo 100 caracteres)
//  c) exibe cada frase, separadas por um ponto e espaço.


int main() {
    int n, i, j;
    printf("digite o número de frases a ser informado, seguido pelas frases:\n");
    scanf("%d ", &n); //lê um número e descarta \n

    char frases[n][101];

    //para cada frase
    for (i = 0; i < n; i++) {
        //para cada letra da frase
        for (j = 0; j < 100; j++) {
            scanf("%c", &frases[i][j]);
            if (frases[i][j] == '\n') break;
        }
    }

    printf("\n\nas frases informadas foram:\n\n");

    //para cada frase
    for (i = 0; i < n; i++) {
        //para cada letra da frase
        for (j = 0; j < 100; j++) {
            printf("%c", frases[i][j]);
            if (frases[i][j] == '\n') break;
        }
    }

}