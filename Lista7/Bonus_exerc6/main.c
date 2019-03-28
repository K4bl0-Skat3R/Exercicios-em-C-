#include <stdio.h>
//IFMS - Prof. Pedro
//Aluno Genilson
//Bonus Lista7
//6. Fazer uma função que recebe uma string (cadeia de caracteres)
// que representa um número na base binária, e devolve o número na base decimal.
//funcao potencia

float calcPot (float x, int z){
    float result=1;

    for(int i=1;i<=z;i++){

        result=x*result;

    }
    return result;
}
// binario para decimal
int bin2dec(char bin[]){
    int i,dec =0;
    //int dec=0,j=0;
    for ( i = 0; bin[i]; ++i) {
        //teste
      //  printf("Digite valor BINARIO :\n");
       //     scanf("%d",&bin[i]);
        //endtest
        if(bin[i]=='0'){
            dec=dec*2+0;
        }else{
            dec=dec*2+1;
        }
    }
    return dec;
}
/*
int bin2dec(char bin[]){
    int potencia(2,8);
    int dec=0,j=0;
    for (int i = 0; bin[i]!='\0'; ++i) {
        for (int i = i-1; i >=0 ; i--) {
            int dec= potencia(2,j)*(bin[i]-48)+dec;
        }
    }
    return dec;
}
*/
/*
void bindec(){
    char bin[50];
    int decimal=0, i, j, tam=0;

    do{
        printf("Digite um numero binario de ate 8 bits: \n");
        scanf("%s", bin);
        tam = strlen(bin);
    } while (tam>8);


    for (i=0, j=tam-1; i<tam; i++, j--){
        /* o i corre de frente pra tras ateh o fim da string bin
         * e o j corre de tras pra frente pra elevar a potencia de 2
         */

     //   decimal+=(bin[i]-48)*pow(2,j);
        /* -48 eh pra transformar o caracter 1 ou 0
         * no numero inteiro 1 ou 0 de acordo com a ASCII

    }

    printf("\n%d\n\n", decimal);

    return;
}
*/
int main() {
    float x,result;
    int  z;

    printf("Digite valor da BASE e EXPOENTE :\n");
    scanf("%f%d",&x,&z);
    result=calcPot(x,z);

    printf("A Potencia eh:%.2f\n",result);
            // imprimindo bin2decimal

            printf("O Binario pra Decimal eh = %d\n",bin2dec("11111111111111111111111110"));


    //    char bin2dec(char bin[50]);
 //    char  b[50]='11010';
 //   printf("Binario para %.s\n pra decmal: %d",b,bin2dec(b));
    return 0;
}



