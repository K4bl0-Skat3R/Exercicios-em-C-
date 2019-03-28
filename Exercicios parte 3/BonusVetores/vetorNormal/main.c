#include <stdio.h>
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
        printf("qual a %dº posição? ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("o vetor é\n");
    //imprimindo o vetor
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}

