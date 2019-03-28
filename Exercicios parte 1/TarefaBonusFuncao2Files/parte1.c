/*função que recebe um vetor e o seu tamanho como parâmetros
 e devolve o maior elemento do vetor*/
int maior(int T, int vet[T]) {
    int i, m = vet[0];

    for (i = 0; i < T; i++) {
        if (vet[i] > m) {
            m = vet[i];
        }
    }
    return m;
}
/*função que recebe um vetor e o seu tamanho como parâmetros e devolve
o menor elemento do vetor*/
int menor(int T, int vet[T]) {
    int i, m = vet[0];

    for (i = 0; i < T; i++) {
        if (vet[i] < m) {
            m = vet[i];
        }
    }
    return m;
}
/*função que recebe um vetor e o seu tamanho como parâmetros e devolve
a medoa dos elemento do vetor*/
float media (int num, float vet[]) {
    float soma = 0;
    int i;
    for (i = 0; i < num; i++)
        soma = soma +vet[i];
    return soma /num;
}



