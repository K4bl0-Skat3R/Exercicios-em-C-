#include <stdio.h>

/*
 * File:   parte2.c
 * Author: pedro
 *
 * Created on 22 de Junho de 2017, 20:37
 */

//ao adicionarmos uma biblioteca padrão do C, usamos < e >
#include<stdio.h>
//ao adicionarmos um arquivo pessoal, usamos aspas duplas

// Tareda Bonus: Aluno Genilson
#include"parte1.c"

    int main() {
        //int  maior();
        int i, n;
        printf("informe o tamanho do vetor: ");
        scanf("%d", &n);

        int v[n];

        printf("informe o vetor:\n");
        for (i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }

        // media, vou usar float... mas o vetor sera o mesmo :D

        float notas[n];
        printf("informe o vetor ,media:\n");
        for (i = 0; i < n; i++) {
            scanf("%f", &notas[i]);
        }
        printf("o maior elemento do vetor eh %d\n", maior(n, v));
        printf("o menor elemento do vetor eh %d\n", menor(n, v));
        printf("a media dos elementos do vetor eh %.2f\n", media(n, notas));
        return 0;
    }