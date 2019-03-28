#include <stdio.h>

//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 5

//exerc7 bonus
//Fazer um programa que
//lê vários números até ser informado o número 0 ou serem lidos 100 números. Depois o
//programa lê um código e exibe uma mensagem dependendo do código:
// código 1 exibe os números na ordem que foram lidos;
// código 2 exibe os números na ordem inversa do que foram lidos.

int main() {
    int n=100, i,codigo,contador =0;

    int vetor[n];

    for (i = 0; i < n; i++) {

        printf("qual o %do valor? ", i + 1);
        //contador para substitur o valor de "n"
        contador =i+1;
        scanf("%d", &vetor[i]);
        if(vetor[i]==0){
            n= contador;
        }

    }
    printf("escolha o codigo 1 ou 2: \n1 mostra os valores modo normal\n2 mostra os valores de modo inverso: \n");
    scanf("%d", &codigo);

    if (codigo == 1) {
        printf("o vetor eh\n");
        //imprimindo o vetor
        for (i = 0; i < n; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }
    else if (codigo == 2) {
        for (i = n - 1; i >= 0; i--) {
            printf("%d ", vetor[i]);

        printf("\n");
    } else{
        printf("codigo invalido!\n");
    }

    return 0;
}




