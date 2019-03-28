#include<stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista3 -
// 5. Fazer um programa que lê três números e
// informe se a soma dos dois primeiros números é maior,
// menor ou igual ao terceiro número.

int main() {

    int n1,n2,n3;
    //int soma = n1 + n2;
    printf("digite 3 numeros: \n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1+n2 > n3){
        printf("a soma de %d + %d eh o maior que %d (terceiro numero)", n1,n2,n3);
    }
    else if(n1+n2 < n3){
        printf("a soma de %d + %d eh o menor que %d (terceiro numero)", n1,n2,n3);
    }
    else if(n1+n2 == n3){
        printf("a soma de %d + %d eh o igual a %d (terceiro numero)" , n1,n2,n3);
    }

    return 0;
}