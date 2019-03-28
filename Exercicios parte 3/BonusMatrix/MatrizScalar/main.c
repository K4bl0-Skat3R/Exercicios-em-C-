#include <stdio.h>
#include <locale.h>
//Aluno Genilson
//Prof Pedro
//IFMS
//Tarefa Bônus - Multiplicação Escalar de Matriz
//ler uma matriz M 3x2 e criar e imprimir outra matriz N 3x2,
// resultante da multiplicação dos elementos de M
// por seu maior elemento.


int main() {
    setlocale(LC_ALL, "portuguese");

    int matrizM[3][2],matrizN[3][2],i,j,maiorLinha=0,maiorCol=0;
    printf("==Matriz M==\n");
    for(i=0;i<3;i++){
        printf("Digite os valores da %da. linha: \n",i+1);
        for(j=0;j<2;j++){
            scanf("%d",&matrizM[i][j]);
        }
        printf("\n");
    }
    //lendo a matrz
    printf("Matriz Original.\n");
    for (i= 0;  i<3 ; i++) {
        for (int j = 0; j <2 ; ++j) {
            printf("%d ",matrizM[i][j]);
        }
        printf("\n");
    }

    //lendo o maior valor da matrz
    printf("===Matriz N===\nresultante da multiplicação dos elementos de M\n por seu maior elemento.\n");
    for (i= 0;  i<3 ; i++) {
        for (int j = 0; j <2 ; ++j) {

            //condicao para pegar o maior valor
            if(matrizM[i][j]< matrizM [maiorLinha][maiorCol]){
                maiorLinha = i;
                maiorCol = j;
                //resultante
                for (i= 0;  i<3 ; i++) {
                    for (int j = 0; j <2 ; ++j) {
                        //Mult a Matriz
                        matrizN[i][j]= matrizM[maiorLinha][maiorCol] * matrizM[i][j];

                      //  printf("%d ",matrizM[maiorLinha][maiorCol] * matrizM[i][j]);
                        printf("%d ",matrizN[i][j]);
                    }
                    printf("\n");
                }
            }else{

                printf("os valores da matriz sao iguais\n");
            }
        }
        printf("\n");
       }


    //maior valor
   printf("\nMenor valor = %d (%da. linha, %da. coluna\n)",
           matrizM[maiorLinha][maiorCol], (maiorLinha+1), (maiorCol+1));
  //  printf("Digite os valores");
    return 0;
}