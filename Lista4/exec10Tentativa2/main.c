#include <stdio.h>
//Aluno Genilson M Souza
//Prof Pedro
//IFMS
//Lista 4
//exercicio 10

//Em uma universidade, cada professor recebe R$57 por hora/aula.
// Fazer um programa que vai lendo o número de identificação
// , sexo (M para masculino, F para feminino) e quantidade de
// aulas dadas por semana de vários professores, até ser informado
// o número de identificação 99999, não precisando ser informados os outros valores.
// O desconto mensal do imposto de renda
// mostrar a
// porcentagem de professores homens e de mulheres
// e a média de salários líquidos dos homens e das mulheres


// ############# Caso queira imprimir em tempo real as duas porcentagens tanto salarial quando o sexo
// como o exercico nao especifica isso foi resolvido imprimindo por vez conforme o usuario ecolhe o sexo
// :D
//PS possiveis solucoes caso queira imprimir tudo ao mesmo tempo
// criar uma variavel pra atualizar a cada porcentagem que armazena
// por exemplo ao digitar 2 mulheres logicamente a variavel de porcentagem sera 100% de mulheres
// porem quando digitar um homem a variavel correspondente nao esta informada da quantidade de mulheres que foram armazenadas
// No entanto apos fazer o calculo seguinte a variavel corrige a porcentagem, ja que o calculo sera refeito
// PS2 : isso aconteceria tmbm com media entre homens e mulheres caso fosse imprimilas separadamente // (claro isso nao se pede aqui)
// no entanto sempre no proximo ciclo while a variavel é contabilizada
// em um sistema onde ha banco de dados isso pode ser resolvido facilmente buscando o valor exato dos dados e mandar em tempos real
// os valores ja armazenados
// assim o programa ira calcular com os dados ja atualizados
// por aqui nao consegui resolver isso com facilidade
// Alias pra algoritimos esse exercicio esta bem avançadinho eheheh
// mas é assim que se evolui sempre algo mais avançado!               Limites
// ainda bem que foi feito de proposito xD hehe

// caso queiram ver isso na pratica basta descomentar as linhas que deixei

//

int main() {
  float  nHoras, salarioB , sLiquido =0, aliquota,mediaSexoM =0,mediaSexoF =0,MediaSalarioB=0,MediaSalarioL =0, SomasalarioB =0, SomasLiquido =0;
    char sexo;
    int ID =0,sexoF =0,sexoM=0,professores =0;
while(1){
    printf("Informe os valore em sequencia, ID 99999 para encerrar:\n");

    printf("Informe o ID do professor :\n");
    scanf("%d",&ID);
    //contando as entradas
    if(ID != 99999){
       // ID = ID+1;
        professores = professores+1;
    }
    if (ID == 99999){
        return((0));
    }
    printf("Informe o sexo do professor (F) ou (M):\n");
    scanf(" %c",&sexo);

//contabilizar o sexo
        if (sexo == 'F') {
            sexoF = sexoF + 1;

            mediaSexoF = (sexoF *100)/professores;        }
        if (sexo == 'M') {
            sexoM = sexoM + 1;

            mediaSexoM = (sexoM*100)/professores;

        }
//contabilizando qtdAulas
        printf("\nInforme a quantidade de horas trabalhadas:\n");
        scanf("%f", &nHoras);

        salarioB = 57 * nHoras;

//Calculando Salario dos profs sem Aliquota... ou seja salario abaixo de 1903.98

        if ((salarioB <= 1903.98) && (salarioB <= 2826.65) && (sexo == 'F')) {

            printf("salario Liquido da professora com ID %d eh = %.2f\n", ID,salarioB);

            //media SalarioLiquido
            SomasalarioB = SomasalarioB + salarioB;
            MediaSalarioB = SomasalarioB / professores;

            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioB);
            printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
        //    printf("porcentagem de homens = %.2f\n", mediaSexoM );
            printf("total de professores consultados = %d\n", professores);


        }
        if ((salarioB <= 1903.98) && (salarioB <= 2826.65) && (sexo == 'M')) {

            printf("Salario Liquido do professor com ID %d eh = %.2f\n", ID,salarioB);
            //media SalarioLiquido
            SomasalarioB = SomasalarioB + salarioB;
            MediaSalarioB = SomasalarioB / professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioB);

            printf("porcentagem de homens  = %.2f\n", mediaSexoM);
      //     printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
            printf("total de professores consultados = %d\n", professores);

        }
    //Calculando Salario Liquido com Aliquota
        if ((salarioB >= 1903.99) && (salarioB <= 2826.65) && (sexo == 'F')) {
            aliquota = salarioB * (7.5 / 100);
            sLiquido = salarioB - aliquota;
            printf("salario Liquido da professora com ID %d eh = %.2f\n", ID,sLiquido);

            //media salarial
            SomasLiquido = SomasLiquido +sLiquido;
            MediaSalarioL = SomasLiquido/professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioL);
            printf("porcentagem de mulheres = %.2f\n", mediaSexoF);
       //     printf("porcentagem de homens = %.2f\n", mediaSexoM );
            printf("total de professores consultados = %d\n", professores);


        }
        if ((salarioB >= 1903.99) && (salarioB <= 2826.65) && (sexo == 'M')) {
            aliquota = salarioB * (7.5 / 100);
            sLiquido = salarioB - aliquota;
            printf("Media  salario Liquido do professor com ID %d eh = %.2f\n", ID,sLiquido);

            //media salarial
            SomasLiquido = SomasLiquido +sLiquido;
            MediaSalarioL = SomasLiquido/professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioL);

            printf("porcentagem de homens  = %.2f\n", mediaSexoM);
         //   printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
            printf("total de professores consultados = %d\n", professores);


        }
        if ((salarioB >= 2826.66) && (salarioB <= 3751.05) && (sexo == 'F')) {
            aliquota = salarioB * (15 / 100);
            sLiquido = salarioB - aliquota;
            printf("Media salario Liquido da professora com ID %d eh = %.2f\n", ID,sLiquido);

            //media salarial
            SomasLiquido = sLiquido +sLiquido;
            MediaSalarioL = SomasLiquido/professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioL);

            printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
        //    printf("porcentagem de homens = %.2f\n", mediaSexoM );
            printf("total de professores consultados = %d\n", professores);


        }
        if ((salarioB >= 2826.66) && (salarioB <= 3751.05) && (sexo == 'M')) {
            aliquota = salarioB * (15 / 100);
            sLiquido = salarioB - aliquota;
            printf("Media salario Liquido do professor com ID %d eh = %.2f\n", ID,sLiquido);

            //media salarial
            SomasLiquido = sLiquido +sLiquido;
            MediaSalarioL = SomasLiquido/professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioL);

            printf("porcentagem de homens  = %.2f\n", mediaSexoM);
        //    printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
            printf("total de professores consultados = %d\n", professores);


        }
        if ((salarioB >= 3751.06) && (salarioB <= 4664.68) && (sexo == 'F')) {
            aliquota = salarioB * (22.5 / 100);
            sLiquido = salarioB - aliquota;
            printf("Media salario Liquido da professora com ID %d eh = %.2f\n", ID,sLiquido);

            //media salarial
            SomasLiquido = sLiquido +sLiquido;
            MediaSalarioL = SomasLiquido/professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioL);

            printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
        //    printf("porcentagem de homens = %.2f\n", mediaSexoM );
            printf("total de professores consultados = %d\n", professores);


        }
        if ((salarioB >= 3751.056) && (salarioB <= 4664.68) && (sexo == 'M')) {
            aliquota = salarioB * (22.5 / 100);
            sLiquido = salarioB - aliquota;
            printf("Media salario Liquido do professor com ID %d eh = %.2f\n", ID,sLiquido);

            //media salarial
            SomasLiquido = sLiquido +sLiquido;
            MediaSalarioL = SomasLiquido/professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioL);

            printf("porcentagem de homens  = %d\n", mediaSexoM);
         //   printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
            printf("total de professores consultados = %d\n", professores);


        }
        if ((salarioB > 4664.68) && (sexo == 'F')) {
            aliquota = salarioB * (27.5 / 100);
            sLiquido = salarioB - aliquota;
            printf("Media salario Liquido da professora com ID %d eh = %.2f\n", ID,sLiquido);

            //media salarial
            SomasLiquido = SomasLiquido +sLiquido;
            MediaSalarioL = SomasLiquido/professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioL);

            printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
        //   printf("porcentagem de homens = %.2f\n", mediaSexoM );
            printf("total de professores consultados = %d\n", professores);


        }
        if ((salarioB > 4664.68) && (sexo == 'M')) {
            aliquota = salarioB * (27.5 / 100);
            sLiquido = salarioB - aliquota;
            printf("Media salario Liquido do professor com ID %d eh = %.2f\n", ID,sLiquido);

            //media salarial
            SomasLiquido = sLiquido +sLiquido;
            MediaSalarioL = SomasLiquido/professores;
            printf("Media  salario Liquido dos professores = %.2f\n", MediaSalarioL);

            printf("porcentagem de homens  = %.2f\n", mediaSexoM );
        //    printf("porcentagem de mulheres = %.2f\n", mediaSexoF );
            printf("total de professores consultados = %d\n", professores);

        }
        } // fim while
         //
         // O return  foi usado no inicio do codigo, caso a condicao do while nao satisfaca o...

    }

