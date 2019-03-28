#include<stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista3 - exercico 2
//3. Fazer um programa que lê um número e informe se é par ou ímpar.

//


int main(){

    int num1;


    printf("Digite um numero: ");
    scanf("%d",&num1);


    if(num1 %2==0){
       printf("%d numero par\n",num1);
    }

    else{
        printf("o numero eh impar\n", num1);
    }

    return 0;
}