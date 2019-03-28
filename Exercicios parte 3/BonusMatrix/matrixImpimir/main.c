#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS

//Tarefa Bônus - Matriz
//Fazer um programa que:
//a) lê o número de linhas e o número de colunas de uma matriz.
//b) preenche a matriz com valores informados pelo usuário
//c) imprime a matriz


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
     for (i=0; i<m; i++) {
  //  printf("%da. linha: ", (i+1));
      for (j=0; j<n; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
    return 0;
}