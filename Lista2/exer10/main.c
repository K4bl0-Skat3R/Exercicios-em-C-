#include <stdio.h>

//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista3 -
//10. Fazer um programa que lê três notas de um aluno e calcule e mostre a média aritmética
// e a situação do aluno que segue na tabela a seguir. Se o aluno ficar de recuperação,
// informar a nota necessária para ser aprovado na prova
// de recuperação, considerando que a média exigida é 6,0.

int main() {
    float n1, n2, n3, media;

    printf("Digite a 1a. nota:\n");
    scanf("%f", &n1);

    printf("\nDigitee a 2a. nota:\n");
    scanf("%f", &n2);

    printf("\nDigitee a 3a. nota:\n");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\nMedia final = %.2f", media);

    if (media >= 7.0)
        printf(" (aprovado)");
    else if ((media >= 2.5) && (media < 7.0))
        printf(" (recuperacao)");
    else
        printf(" (reprovado)");
}