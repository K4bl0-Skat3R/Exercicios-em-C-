#include <stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//programa que lê a base e a altura de um retângulo
//e mostre sua área (𝐴=𝑏𝑎𝑠𝑒×𝑎𝑙𝑡𝑢𝑟𝑎).
int main() {
    float base, altura, area;
    printf ("\nDigite a base: ");
    scanf ("%f",&base);
    printf ("\nDigite a altura: ");
    scanf ("%f",&altura);
    area= base*altura;
    printf ("\nO valor da area eh %.2f\n", area);
    return 0;
}
