#include <stdio.h>

//Aluno Genilson
//Prof. Pedro
//IFMS
//Lista3 -

//9. Fazer um programa que lê uma data e
// informe qual a estação do ano correspondente
// (Primavera, Verão, Outono, Inverno).
// PS2:pelo nivel de aprendizado sera considerado que os dias poderao ser ate 31
//PS: as informaçoes sobre  o periodo foram retiradas de;
// Fonte: Observatório Nacional
//http://www.inmet.gov.br/portal/index.php?r=home2/page&page=estacoesDoAno

int main() {
    printf("Estacoes do ano\n");
    int  dia, mes;
    printf("digite o dia e mes para saber a estacao correspondente \n ex: 8 de maio; ficara: 8 do 5 ");
    printf("digite o dia: ");
    scanf("%d", &dia);
    printf("digite o mes: ");
    scanf("%d",&mes);



    if((dia >=1)&&(dia <=30)&&( mes >= 3)&&(mes <= 5 )){
        printf(" Estacao OUTONO ");
    }
    else if((dia>=1)&&(dia <=31)&&( mes >=6 &&(mes<= 8 ))){
        printf(" Estacao INVERNO ");
    }
    else if((dia >=1) &&(dia<=31)&&( mes >= 9)&&(mes <= 11 )){
        printf(" Estacao PRIMAVERA ");
    }
    else if((dia >=1)&&(dia<=30)&&( mes == 12)||(mes >= 01)&&(mes <=2 )){
        printf(" Estacao VERAO ");
    }
        else if((dia >31)&&(mes >12)){
        printf("fora do calendario");
    }
    else{
        printf("data errada");
    }

    return 0;
}