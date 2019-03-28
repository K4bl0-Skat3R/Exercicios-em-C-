#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS

//Trabalho 2 - Multiplicação de Matriz
//


int main() {
// variaveis primeira matriz
  int i, j, m,n;

    printf("==== Matriz 1 M x N =====\n Digite as dimensoes da matriz 1: ?");
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
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
    // segunda matriz

    int  mm,nn;

    printf("==== Matriz2 M x N =====\n Digite as dimensoes da  matriz 2: ?");
    scanf("%d %d",&mm,&nn);
    printf("\nA matriz contem %d linhas e %d Colunas\n",mm,nn);
    int matrix2[mm][nn];
    for (i=0; i<mm; i++) {
        printf("Informe os elementos da %da. linha:\n", (i+1));
        for (j=0; j<nn; j++) {
            scanf("%d", &matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz de ordem %d X %d\n",mm,nn);
    for (i=0; i<mm; i++) {

        for (j=0; j<nn; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    //Matriz Multiplicao Final
    int matriz3[m][n],k;

    printf("==== Matriz MUltiplicacao\n");

    if(n!=mm)
    {
        printf("\ndimensao da matriz impossivel de multiplicar");
        main(0);
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<nn;j++)
            {
                matriz3[i][j]=0;
                for(k=0;k<m;k++)
                {
                    matriz3[i][j]=matriz3[i][j]+matrix[i][k]*matrix2[k][j];
                }
            }

        }

    }
    printf("\nO resultado da matriz eh:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<nn;j++)
        {
            printf("%d\t",matriz3[i][j]);
        }
        printf("\n");
    }
    return 0;
    }

