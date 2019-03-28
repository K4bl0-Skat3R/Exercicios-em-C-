#include<stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//Trabalho 01 - digitar 3 numeros; multiplicar o primeiro numero
// pela soma do segundo + o terceiro

// printf("%,2f",)


int main(){

    int num1, num2, num3;


    printf("Digite primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);
    printf("digite o terceiro numero: ");
    scanf("%d",&num3);
    if(num1 > num2 > num3)
        printf("%d  %d  %d sequencia ordenada",num1, num2, num3);

    else if(num1 > num3 > num2)
        printf("%d  %d  %d sequencia ordenada",num1, num3, num2);

    else if(num2 > num1 > num3)
        printf("%d  %d  %d sequencia ordenada",num2, num1, num3);

    else if(num2 > num3 > num1)
        printf("%d  %d  %d sequencia ordenada",num2, num3, num1);

    else if(num3 > num2 > num1)
        printf("%d  %d  %d sequencia ordenada",num3, num2, num1);

    else
        printf("%d  %d  %d sequencia ordenada",num3, num1, num2);

    // printf("%d * %d + %d = %d\n\n",num1, num2, num3,(num2 + num3)*num1);

    return 0;
}
