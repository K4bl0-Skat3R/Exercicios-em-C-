#include <stdio.h>
//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 4
//exercicio 9
//Fazer um programa que vai lendo trios de números x,y,z
// até o usuário digitar um trio de números iguais.
// Para cada trio x,y,z, o programa deve exibir os
// números múltiplos de z entre x e y , inclusive
int main() {
    int x, y, z;
    while (1) {
        printf("digite 3 numeros inteiros: \n");
        scanf("%d%d%d", &x, &y, &z);
        if ((x == y) && (x == z) && (y == z)) {
            return((0));
        }
        printf("entre %d e %d os multilpos de %d sao:\n",x,y,z);
        for(int i=x;i<=y;i++) {
            //   intervalo de i;
            if (i % z == 0) {
                printf("%d\n", i);
            }
        }
        // ordem inversa
        for(int i=x;i>=y;i--) {
            //   intervalo de i;
            if (i % z == 0) {
                printf("%d\n", i);
            }
        }
        printf("para sair digite 3 numero iguais\n\nou continue...\n");
    }
}



