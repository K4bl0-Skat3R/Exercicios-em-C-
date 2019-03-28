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
    float distancia, litros, consumo;
    //float(distancia) / litros;
    litros =(distancia/consumo);

    printf("Informe o consumo medio(em km/litro)...: ");
    scanf("%d", &consumo);

  printf("Informe a distancia percorrida (em km)...: ");
  scanf("%d", &distancia);

  printf("Informe o valor por litros: ");
  scanf("%d", &litros);
    consumo = (distancia) / litros;


  printf("\nConsumo Medio = %6.2f km/litro.", consumo);

    return 0;
}