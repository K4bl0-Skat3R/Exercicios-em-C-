#include <stdio.h>

// Fazer uma calculadora simples na linguagem C que vai
// lendo uma sequência de operações no seguinte formato:
// um número real, um operador e outro número real.
// Cada operação deve ser informada em uma linha diferente.
// Os operadores aceitos são (*), (/), (+), (-), sem considerar os parênteses.
// Para cada operação, deve ser exibido o resultado
// com no máximo duas casas decimais. O programa encerra quando for
// informada uma operação de divisão por zero, não exibindo o resultado desta operação.

//    Exemplo de entrada | Exemplo de saída |
//    | 1 + 3            | 4                |
//    | 9 / 2            | 4.50             |
//    | -8 * 4           | -32              |
//    | 50 - -50         | 100              |
//    | 123 / 0          |                  |
//    _______________________________________

int main() {

    float n1,n2;
    char operador;
    printf("Digite um numero real: \n");
    scanf("%f",&n1);
    printf("Digite um operador: \n");
    scanf(" %c",&operador);
    printf("Digite outro numero real: \n");
    scanf("%f",&n2);
    switch (operador){
        case '+':
            printf("%.2f\n",n1 + n2);
            return (main());
        case '-':
            printf(" %.2f\n",n1 - n2);
            return (main());
        case '*':
            printf(" %.2f\n",n1 * n2);
            return (main());
        case '/':
            if(n2 ==0){
                return ((0));
            }else{
                printf("%.2f\n",n1 / n2);
                return (main());
            }
         default:
           printf("operacao invalida");
    }
    return 0;
}