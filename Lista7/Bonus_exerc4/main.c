#include <stdio.h>
//IFMS - Prof. Pedro
//Aluno Genilson
//Bonus Lista7
//exercicio4
//Fazer uma função que recebe uma string
// (cadeia de caracteres) e devolve o tamanho dela.

int strTamanho(char xFrase[]){

    int qtdChar =0;
    for (int i = 0; i< xFrase[qtdChar] != '\0'; ++i) {
        qtdChar +=1;
    }
    return qtdChar;
}
int main() {
char xFraseUsuario[20];
    printf("digite uma palavra: \n");
    scanf("%s",xFraseUsuario);
    int num = strTamanho(xFraseUsuario);
    printf("a frase %s possui %i catateres",xFraseUsuario,num);
    return 0;
}