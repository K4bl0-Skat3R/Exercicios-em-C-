#include<stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista3 -
//6. Fazer um programa que lê três números
// representando os lados de um triângulo
// e informe se é equilátero, isósceles ou escaleno.
int main() {
    int n1,n2,n3;
printf("possiveis triangulos \n equilatero, isosceles ou escaleno.\n");
    printf("digite 3 numeros para formar um dos triangulos: \n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if((n1 == n2)&&(n2==n3)&&(n1 == n3)){
        printf("os valores %d, %d e %d formam um TRIANGULO EQUILATERO", n1,n2,n3);
    }
    else if((n1 != n2)&&(n2 !=n3)&&(n1 != n3)){
        printf("os valores %d, %d e %d formam um TRIANGULO ESCALENO", n1,n2,n3);
    }
    else if((n1 == n2) && (n2 != n3)||(n1 != n2)&& (n2 == n3) || (n1 != n2) && (n1 == n3)){
        printf("os valores %d, %d e %d formam um TRIANGULO Isosceles", n1,n2,n3);
    }
    else{
        printf("nao eh um dos tres triangulos citados");
    }
    return 0;
}

