#include <stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//programa que lê o salário bruto de um funcionário e mostre
//o salário líquido, sendo que o funcionário tem uma
// gratificação de 5% sobre
//o salário bruto e paga imposto de 7% sobre o salário bruto.
int main() {
   float salario, novoSalario;
  printf("Informe o salario mensal bruto:\n");
  scanf("%f", &salario);
  salario = salario*0.93;
  //novoSalario = reajuste;
  novoSalario = salario + (salario * (5/100.00));
  printf("\n\nSalario novo = R$ %.2f", novoSalario);
    return 0;
}