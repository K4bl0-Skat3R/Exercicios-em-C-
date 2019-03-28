#include <stdio.h>
//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista 3
//8. Fazer um programa que lê o salário bruto e calcule o salário líquido. Para esse programa,
// o salário líquido será o salário bruto menos os descontos de INSS e IR, seguindo as regras:
// a. Para salários menores que R$1.500,00, não se deve descontar IR, mas se desconta 8% de INSS;
// b. Para salários a partir R$1.500,00, se desconta 5% de IR e 11% de INSS.

int main() {
    float salario, SalarioIr_Inss;

    printf("Informe o salario mensal bruto:\n");
    scanf("%f", &salario);
    if(salario < 1500.00){
        salario = salario*0.92;
        printf("\n\nSalario Liquido com descontos do INSS= R$ %.2f", salario);

    }else if(salario > 1500.00){
        salario = salario*0.95;
        SalarioIr_Inss = salario -(salario *(11/100.00));
        printf("\n\nSalario Liquido com descontos = R$ %.2f", SalarioIr_Inss);
    }
    return 0;
}