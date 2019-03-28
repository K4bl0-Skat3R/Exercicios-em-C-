#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS

//Tarefa Bônus - Atividade da Aula
// exercicio 01
// 1.Fazer um programa que lê uma matriz NxN
// e mostre a soma dos elementos da diagonal principal.

int main() {

    int i, j, m,n;
    int Soma_dp = 0;
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
        for (j=0; j<n; j++) {
            printf("%d\t", matrix[i][j]);
         // somando a diagonal principal
            if (i == j)
                Soma_dp = Soma_dp + matrix[i][j];
        }
        printf("\n");
    }
    printf("\nA Soma da Diagonal Principal eh = %d\n", Soma_dp);
    return 0;
}