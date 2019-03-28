#include <stdio.h>

//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista3 -
//Fazer um programa que lê três números e os exibe em ordem não crescente (não usar vetores).


int main() {
    printf("Ordem decrescente\n");
    int n1,n2,n3,aux;
    printf("digite 3 numeros: \n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1<n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if(n2 < n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if(n1<n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }


    printf("Os numeros em ordem decrescente: %d, %d e %d \n",n1,n2,n3);
    return 0;
}