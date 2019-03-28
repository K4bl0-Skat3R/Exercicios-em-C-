#include <stdio.h>

//
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista4
//4.Fazer um programa que lê n e imprime a tabuada de n .
//

int main() {
    int n1;
    int op;

    printf("escolha uma Operacao: \n");
    printf("1 = adicao\n2 = Multiplicacao\n\n");
    scanf("%d",&op);
    if(op == 1) {
        printf("quantos numeros deseja somar? \n");
        scanf("%f", &n1);
        for (int i = 1; i <= n1; i++) {
            printf("%d + %d = ", i, i);
            printf("%d\n", i + i);
        }
        printf("\n1 = Voltar\n3 = Sair\n\n");
        scanf("%d",&op);
        if(op ==1){
            return (main());
        }
        if(op ==3){
            return ((0));
        }
    }

    else if(op ==2) {
        printf("Quantos numeros deseja multiplicar? \n");
        scanf("%d", &n1);
        for (int i = 1; i <= n1; i++) {
            printf("%d * %d = ",i,i);
            printf("%d\n", i*i);
        }
        printf("\n1 = Voltar\n3 = Sair\n\n");
        scanf("%d",&op);
        if(op ==1){
            return (main());
        }
        if(op ==3){
            return ((0));
        }
    }
        else{
        printf("opcao invalida\n\n");
        printf("\n1 = Voltar\n3 = Sair\n\n");
        scanf("%d",&op);
        if(op ==1){
            return (main());
        }
        if(op ==3){
            return ((0));
        }

    }

    return 0;
}