#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS

// o elemento MINMAX de uma matriz é o maior elemento da linha que
// se encontra o menor elemento da matriz.
// fazer um programa que lê uma matriz MxN e exibe o seu elemento MINMAX
// e a sua posiçao (linha e coluna)
// se ocorrer empate, exibir o MINMAX da última linha



        int main() {

    int i, j, m,n,maiorLinha=0,maiorCol=0,menorLinha=999,menorCol=999;

    printf("==== Matriz M x N =====\n Digite as dimensoes da matriz: ?");
    scanf("%d %d",&m,&n);
    printf("\nA matriz contem %d linhas e %d Colunas\n",m,n);
    int matrix[m][n];
    for (i=0; i<m; i++) {
        printf("Informe os elementos da %da. linha:\n", (i+1));
        for (j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz de ordem %d X %d\n",m,n);
    for (i=0; i<m; i++) {
        //  printf("%da. linha: ", (i+1));
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
        //lendo o maior valor da matrz
        printf("===Matriz MIN-MAX===\n");
        for (i = 0; i < m; i++) {
            for (int j = 0; j < n; ++j) {

                //condicao para pegar o maior valor
                if (matrix[i][j] > maiorLinha) {
                    maiorLinha = i;
                    maiorCol = j;
                    //resultante

                }// else {

              //  }
            }
            printf("\n");
        }

        //lendo o menor valor da matrz

        for (i = 0; i < m; i++) {
            for (int j = 0; j < n; ++j) {

                //condicao para pegar o maior valor
                if (matrix[i][j] < menorLinha) {
                    menorLinha = i;
                    menorCol = j;


                }// else {

                //     printf("os valores da matriz sao iguais\n");
                //  }
            }
            printf("\n");
        }


        //maior valor
          printf("\nMaior valor = %d (%da. linha, %da. coluna\n)",
          matrix[maiorLinha][maiorCol], (maiorLinha+1), (maiorCol+1));

            //menor valor
            printf("\nMenor valor = %d (%da. linha, %da. coluna\n)",
                   matrix[menorLinha][menorCol], (menorLinha+1), (menorCol+1));

        return 0;
    }
