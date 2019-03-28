#include <stdio.h>


//IFMS - Prof. Pedro
//Aluno Genilson

//Trabalho 2 - Multiplicação de Matriz
//exemplo
//Entrada Saída
//3 2
//2 3
//0 1
//-1 4
//2 3
//1 2 3
//-2 0 4
//-4 4 18
//-2 0 4
//-9 -2 13
//resultado do teste

/*Resultado Matriz3:
-4  4  18
-2  0  4
-9  -2  13


Process finished with exit code 0*/

// Trabalho 2

int main()
{

    int lin1, col01, lin2, col02, i, j, k;

    printf("QTD linhas e colunas da matriz1: ");
    scanf("%d %d", &lin1, &col01);

    // matrizes1
    int matriz1[lin1][col01];

  // comentado a condicao que verifica se eh multiplicavel
    //ja que disse que nao precisaria disso
   /* while (col01 != lin2)
    {
        printf(" o valor da coluna da matriz1 nao eh = linha da matriz2.\n\n");
        return main();
    }*/

    //  matriz 01.
    printf("\nvalores da matriz 1: \n");
    for(i=0; i<lin1; ++i)
        for(j=0; j<col01; ++j)
        {
          //  printf("Posicao a%d%d: ",i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }

    // Matriz 2

    printf("QTD linhas e colunas da matriz2: ");
    scanf("%d %d",&lin2, &col02);

    int matriz2[lin2][col02];

    printf("\nValores da matriz 2:\n");

    for(i=0; i<lin2; ++i)
        for(j=0; j<col02; ++j)
        {
          //  printf("Posicao b%d%d: ",i+1, j+1);
            scanf("%d",&matriz2[i][j]);
        }
    // matriz 3
// adcionando valores e gerando o resultado + m1 * m2 = matriz 3
   int result[lin1][col02];
    for(i=0; i<lin1; ++i)
        for(j=0; j<col02; ++j){
            result[i][j] = 0;
        }
        for(i=0; i<lin1; ++i)
        for(j=0; j<col02; ++j)
            for(k=0; k<col01; ++k){
                result[i][j]+=matriz1[i][k]*matriz2[k][j];
            }

    // imprimindo
    printf("\nResultado Matriz3:\n");
    for(i=0; i<lin1; ++i)
        for(j=0; j<col02; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == col02-1)
                printf("\n\n");
        }
    return 0;
}
