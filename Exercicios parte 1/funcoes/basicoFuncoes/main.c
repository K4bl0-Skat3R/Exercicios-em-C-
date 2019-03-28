#include<stdio.h>

/*
 ao declararmos uma função, precisamos de 3 coisas:
 primeiro, o tipo de retorno dela
 segundo, o nome dela
 terceiro, os parâmetros que ela recebe, entre parênteses
 */
/*
 OBS1.: quando uma função não devolve nada, declaramos o tipo de retorno dela como VOID (vazio).
 */
/*
 OBS2.: quando uma função não recebe parâmetros, os parênteses ficam vazios.
 */
/*
 OBS3.: para cada parâmetro, devemos colocar o seu tipo e separar cada parâmetro por vírgula
 */

/*
 função SOMA, que recebe dois números como parâmetros e imprime (ou escreve) a soma desses dois números.
 */
void soma(int a, int b) {
    printf("%d\n", a + b);
}

/*
 função SUBTRACAO, que recebe dois números como parâmetros e devolve (retorna) a subtração deles
 */
int subtracao(int x, int y) {
    return x - y;
}

/*
 função OLA, que não recebe nenhum parâmetro, e escreve uma mensagem de boas vindas na tela
 */
void ola() {
    printf("Ola! Tudo bem?\n");
}

/*
 função cubo, que não recebe nenhum parâmetro e devolve o cubo de 2.78
 */
float cubo() {
    return 2.78 * 2.78 * 2.78;
}

/*
 função que lê um numero e devolve o quadrado deste número
 */
int quadrado() {
    int num;
    printf("digite um numero: \n",&num);
    scanf("%d", &num);
    return num * num;
}

int main() {
    //para chamar uma função, devemos colocar o seu nome, e entre parênteses os argumentos que ela espera receber
    //se ela não espera receber nenhum argumento, os parênteses devem ser colocados, mesmo que vazios
    soma(8, 75);

    //se uma função devolve algum valor, devemos colocar uma variável que vai receber o valor que a função devolveu
    int resultado = subtracao(7, 3);
    printf("%d\n", resultado);

    ola();

    //o printf aceita o valor de retorno de uma função também
    printf("%f\n", cubo());

    printf("%d\n", quadrado());

    return 0;
}