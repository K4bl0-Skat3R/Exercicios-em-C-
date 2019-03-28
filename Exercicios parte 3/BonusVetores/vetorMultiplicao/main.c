#include <stdio.h>
//IFMS -Pedro
//Aluno Genilson
//Tarefa Bônus - Vetor Multiplicação
//ler dois vetores de tamanho n.
//criar e exibir um terceiro vetor no qual cada elemento
// é a multiplicacao dos elementos dos outros dois.
// Exemplo para n = 3:

// Vetor 1: 5 8 9
// Vetor 2: 3 9 7
// Vetor 3: 15 72 63
int main() {
    printf("Vetor Mult\n");
    int n,i;
    printf("digite o tamanho dos vetores\n ==Vetor01 || vetor02==\n");
    scanf("%d",&n);
    int Va[n], Vb[n], Vc[n];
    //lendo veotr 01
    for (i=0; i<n; i++) {
        printf("Informe o %1do. valor do vetor 1: \n", (i+1));
        scanf("%d", &Va[i]);
    }
    printf("\n\n");
    for (i=0; i<n; i++) {
        printf("Informe o %1do. valor do vetor 2: \n", (i+1));
        scanf("%d", &Vb[i]);
    }
    for (i=0; i<n; i++) {
        for (int j = 0; j <n ; ++j) {
             Vc[i] = Va[i] * Vb[i];
        }
     }
    printf("\n\n Resultado\nVetor a * Vetor b = Vetor c\n");
    printf("==============================\n");
    for (i=0; i<n; i++) {
        printf(" %2d  * %2d = %2d\n" ,Va[i], Vb[i], Vc[i]);
    }
    printf("==============================\n");
    return 0;
}