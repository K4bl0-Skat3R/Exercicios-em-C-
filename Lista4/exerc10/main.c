#include <stdio.h>
//Em uma universidade, cada professor recebe R$57 por hora/aula.
// Fazer um programa que vai lendo o número de identificação
// , sexo (M para masculino, F para feminino) e quantidade de
// aulas dadas por semana de vários professores, até ser informado
// o número de identificação 99999, não precisando ser informados os outros valores.
// O desconto mensal do imposto de renda
// mostrar a
// porcentagem de professores homens e de mulheres
// e a média de salários líquidos dos homens e das mulheres

// ta bagunçado o codigo pois fiquei tentando validar o salario e nenhum IF entra no while
// oque estou fazendo errado?
//apenas o ID esta encerrando o programa
//e como somo valores em char pra fazer a media de masculin e feminino?

int main() {
    int aula,ID =0;
    char sexo,sexoF =0 ,sexoM = 0;
    float salarioB =0,qtdAulas =0;

// inicializando o contador e o somatório

    printf("Informe os valore em sequencia, ID 99999 para encerrar:\n");
 //   while (1) {
        printf("Informe o ID do professor :\n");
        scanf("%d",&ID);

        if (ID == 99999){
            return ((0));
        } else{
             ID=ID+1;
        }
        // contabilzando o sexo

        printf("Informe o sexo do professor (F) ou (M):\n");
        scanf(" %c",&sexo);
        if(sexo == 'F') {
            sexoF = sexoF + 1;
        }
        if(sexo == 'M'){
           sexoM = sexoM + 1;
                //contabilizando qtdAulas
            }
        printf("Informe a qtdAulas :\n");
        scanf("%d",&qtdAulas);
        salarioB = qtdAulas * 57;
        printf("\n\n");

        //Calculando Salario

        if(salarioB <=1903.98){

            printf("Media  salarios das professoras = %.2f\n",salarioB);
            printf("porcentagem de mulheres = %d\n", sexoF/ID);

        }
        if(salarioB<=1903.98){
            // qtdAulas = salario;
            printf("Media  salarios dos professores = %.2f\n", salarioB);
            printf("porcentagem de homens  = %d\n", sexoF/ID);

        }
        if((qtdAulas >=1903.99)&&(qtdAulas <=2826.65)&&(sexo =='F')){
            qtdAulas *92.5;
            printf("Media  salarios das professoras = %.2f", salarioB);

        }
        if((qtdAulas >=1903.99)&&(qtdAulas <=2826.65)&&(sexo =='M')){
            qtdAulas *92.5;
            printf("Media  salarios dos professores = %.2f", salarioB);

        }
        if((qtdAulas >=2826.66)&&(qtdAulas <=3751.05)&&(sexo =='F')){
            qtdAulas *85.0;
            printf("Media  salarios das professoras = %.2f", salarioB);

        }
        if((qtdAulas >=2826.66)&&(qtdAulas <=3751.05)&&(sexo =='M')){
            qtdAulas *85.0;
            printf("Media  salarios dos professores = %.2f", salarioB);

        }
        if((qtdAulas >=3751.06)&&(qtdAulas <=4664.68)&&(sexo =='F')){
            qtdAulas *77.5;
            printf("Media  salarios das professoras = %.2f", salarioB);

        }
        if((qtdAulas >=3751.056)&&(qtdAulas <=4664.68)&&(sexo =='M')){
            qtdAulas *77.5;
            printf("Media  salarios dos professores = %.2f", qtdAulas);

        }
        if((qtdAulas >4664.68)&&(sexo =='F')){
            qtdAulas *62.5;
            printf("Media  salarios das professoras = %.2f", qtdAulas);

        }
        if((qtdAulas >4664.68)&&(sexo =='M')){
            qtdAulas *62.5;
            printf("Media  salarios dos professores = %.2f", qtdAulas);

        }



        // ate 1.903,98

// final while

 //   }







    return 0;
}