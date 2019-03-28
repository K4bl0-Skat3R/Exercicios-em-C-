#include<stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista3 -
//4. Fazer um programa que lê três números e informe qual é o maior.


int main() {
    int n1,n2,n3;
    printf("digite 3 numeros: \n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if((n1>n2)&&(n1>n3)){
        printf("%d eh o maior numero", n1);
    }
    else if(n2 > n3){
        printf("%d eh o maior numero",n2);
    }
    else{
        printf("%d eh omaior valor",n3);
    }

    return 0;
}