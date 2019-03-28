#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS

//Tarefa Bônus - Atividade da Aula
// exercicio 02
// 2.Fazer um programa que lê uma matriz NxN e informa se ela é triangular inferior
// (todos os elementos acima da diagonal principal são iguais a 0).
//testando
//Matriz de ordem 3 X 3

/*
 * testando
1       0       0
1       0       0
3       4       0
eh uma matriz triangular inferior.
Process finished with exit code 0  */

int main() {

    int i, j, m,n;
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
    //matriz triangular inferior
    int ehinferior = 1;
    for (i=0; (i<n)&&(ehinferior==1); i++) {
// for para os elementos acima da diagonal principal
        for (j=(i+1); (j<n)&&(ehinferior==1); j++) {
// outro for para verificar se os elementos sao iguais a zero
            if (matrix[i][j] != 0)
                ehinferior = 0;
        }
    }
// caso seja matriz triangular inferior
    printf("\n");
    for (i=0; i<n; i++) {
      //  printf("%da. linha: ", (i+1));
        for (j=0; j<n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    if (ehinferior == 1)
        printf("\neh uma matriz triangular inferior.\n");
    else printf("\n\"nao\" eh uma matriz triangular inferior.\n");

    return 0;
}