#include <stdio.h>
//IFMS - Prof. Pedro
//Aluno Genilson
//Bonus Lista7
//exercicio5
//Fazer uma função que recebe a altura de um triângulo isósceles e imprime
// o triângulo com asteriscos. Exemplo para altura = 5:
/*
 *      *
       ***
      *****
     *******
    *********


 * */
//resultado tteste
/*C:\Users\windows10\CLionProjects\Lista7\Bonus_exerc5\cmake-build-debug\Bonus_exerc5.exe
        Tamanho triangulo de asteristico
5
5
        *
       ***
      *****
     *******
    *********

  */

//funcao piramide
int piramide(int rows){
    int i, space, star=0;
    for(i = 1; i <= rows; i++) {
        for(space = 1; space <= rows-i; space++) {
            printf(" ");
        }
        // preencher espaços com os asteristicos
        while(star != (2*i - 1)) {
            printf("*");
            star++;;
        }
        star=0;
        // volta ate completar as linhas restantes
        printf("\n");
    }

}
int main() {
    int tam,result;
    printf("Tamanho triangulo de asteristico\n");
    scanf("%d",&tam);
    result = piramide(tam);
    printf("%d",result);
}

