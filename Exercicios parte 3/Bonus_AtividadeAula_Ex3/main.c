#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS

//Tarefa Bônus - Atividade da Aula
// exercicio 03
// 3.	Fazer um programa que lê uma matriz NxN e informa se ela
// é triangular superior (todos os elementos abaixo da diagonal principal são iguais a 0).
//
//testando
//Matriz de ordem 3 X 3

/*
 * testando
Matriz de ordem 4 X 4

1a. linha: 1 2 3 4
2a. linha: 0 4 5 6
3a. linha: 0 0 5 8
4a. linha: 0 0 0 77

eh uma matriz triangular superio

Process finished with exit code 0 */

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
    // verificar se eh uma matriz triangular superior
    int ehsuperior = 1;
    for (i=0; (i<n)&&(ehsuperior==1); i++) {
// um for para varrer os elementos abaixo da diagonal principal
        for (j=0; (j<i)&&(ehsuperior==1); j++) {
// outro for para saber se os elementos saoiguais a zero
            if (matrix[i][j] != 0)
                ehsuperior = 0;
        }
    }
// lendo matriz triangular superior
    printf("\n");
    for (i=0; i<n; i++) {
        printf("%da. linha: ", (i+1));
        for (j=0; j<n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    if (ehsuperior == 1)
        printf("\neh uma matriz triangular superior.\n");
    else printf("\n \"nao\" eh uma matriz triangular superior.\n");

    return 0;
}