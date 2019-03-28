#include <stdio.h>

//Aluno Genilson
//Prof. Pedro
//IFMS
//Suponha que Joãozinho vá fazer uma viagem de carro e quer saber
// quantos R$ ele vai gastar em gasolina. Fazer um programa que lê três números
// reais q, d, p, que são, respectivamente, o consumo do carro medido
// em quilômetros por litro (Km/l), a distância total que será percorrida (Km)
// e o preço do litro da gasolina
// (R$/l) e calcule quantos R$ Joãozinho vai gastar em gasolina para viajar.
int main() {
   float litros, kms, valorLitro,Total;
  printf("\nInforme o consumo do carro em quilometros por litro (Km/l): \n");
  scanf("%f", &litros);

  printf("\nInforme a quilometragem que serah percorrida (Km): \n");
  scanf("%f", &kms);

  printf("Informe o valor do litro de combustivel: \n");
  scanf("%f", &valorLitro);
  Total = litros * valorLitro;
  printf("\n\nValor total gasto na viagem = R$ %8.2f", Total);

    return 0;
}