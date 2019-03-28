#include <stdio.h>
//IFMS - Prof. Pedro
//Aluno Genilson
//Bonus Lista7
//6. Fazer uma função que recebe uma string (cadeia de caracteres)
// que representa um número na base binária, e devolve o número na base decimal.
//funcao potencia

double potencia(double n, int P){
    double pot=1,i;
    for(i=0;i<n;i++){
        pot =pot*n;
    }
    return pot;
}
// binario para decimal

    int bin2dec(char bin[]){
        double potencia(double n, int j);
        int dec=0,j=0;
        for (int i = 0; bin[i]!='\0'; ++i) {
            for (int i = i-1; i >=0 ; i--) {
                int dec= potencia(2,j)*(bin[i]-48)+dec;
            }
        }
        return dec;
    }

int main() {
    double potencia(double n, int P);
    char bin2dec(char bin[50]);
    double base=2;
    int expoente=8;
char  b[50]='11010';
    printf("digite 2 numeros valor e espoente: \n");
    scanf("%f%d",&base,&expoente);
    printf("o numero %.2f elevado ao expoente %d tem valor = a %.2f",base,expoente,potencia(base,expoente));

    printf("Binario para %.s\n pra decmal: %d",b,bin2dec(b));
    return 0;

}