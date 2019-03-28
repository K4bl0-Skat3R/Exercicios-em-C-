#include <stdio.h>

//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista4

//exercicio 02
//2.Modificar o programa anterior, de tal modo que apenas múltiplos de três ou cinco
// são consideradas na soma. Exemplo,
// para n =17, soma =3+5+6+9+10+12+15.
 int main() {
     int n;
     int soma =0;
     printf("digite um numero: ");
     scanf("%d", &n);
     printf("soma = ");
     for (int i = 1; i <= n; i++) {

         if (i % 3 == 0 || i % 5 == 0) {
             soma=soma+i;
             printf("%d + ", i);
         }
     }
     printf(" = %d",soma);
     return 0;
 }