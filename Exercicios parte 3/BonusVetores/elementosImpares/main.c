#include <stdio.h>
//Aluno: Genilson
//IFMS prof:Pedro
//Tarefa Bonus
//valores impares do vetor
int main() {
    int n, i;
    //primeiro devemos ler o tamanho do vetor
    printf("qual o tamanho do vetor? ");
    scanf("%d", &n);

    //agora que já sabemos o tamanho do vetor,
    //podemos declarar ele
    int vetor[n];

    //preenchendo o vetor com valores
    //informados pelo usuário
    for (i = 0; i < n; i++) {
        printf("qual a %dº posicao? ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("os numeros impares do vetor eh\n");
    //imprimindo o vetor

    for (int i = 0; i < n;i++) {


      if( (vetor[i] %2) !=0){
            printf("%d ", vetor[i]);
       }

    }

    return 0;
}