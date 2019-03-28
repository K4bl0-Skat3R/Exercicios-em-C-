#include<stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 5

//Bonus Vetores Lista5
//exercicio 10.
//Fazer um programa que lê um vetor de caracteres até for informado um caractere
 // de quebra de linha ‘\n’ ou 100 caracteres forem lidos. Depois o programa deve dizer
// se o vetor de caracteres é palíndromo ou não (Um palíndromo é uma palavra, frase, número,
// ou outra sequência de caracteres que se lê da
//mesma forma que de trás para frente, como ARARA, REVIVER ou OGALOAMAOLAGO)./

//RESULATDO DO TESTE

/*C:\Users\windows10\CLionProjects\BonusLista5Ex10\cmake-build-debug\BonusLista5Ex10.exe
 *
Qual o tamanho  do vetor e seus valores
2
2
arara
        arara
reviver
        reviver

eh um palindromo.
Process finished with exit code 0
 */

int main()
{
    int n, i, j, ehpalin;
    printf("Qual o tamanho  do vetor e seus valores\n ");
    scanf("%d ", &n);

    char VetorCaracteres[n][101];

    for (i = 0; i < n; i++) {
        for (j = 0; j < 100; j++) {
            scanf("%c", &VetorCaracteres[i][j]);
            if (VetorCaracteres[i][j] == '\n') break;
        }
    }
    i = 0;
    j = (n-1);
    ehpalin = 1;
    while ((i < j) && (ehpalin == 1)) {
        if ((VetorCaracteres[i] != VetorCaracteres[j])&&(VetorCaracteres[i][j] == '\n')){
            ehpalin = 0;
            break;
            } // nao eh palindromo
        else {
            i = i + 1;
            j = j - 1;
        }
    }
    if (ehpalin == 1)
        printf("\neh um palindromo.");
    else printf("\nnao eh um palindromo.");

    return 0;
}