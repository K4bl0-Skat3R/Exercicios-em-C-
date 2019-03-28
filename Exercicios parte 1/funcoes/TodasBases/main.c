#include <stdio.h>
#include <math.h>
void Dec2Bin()
{
    int n,bin[100],i,j;
    printf("Digite o DECIMAL pra BINARIO\n");
    scanf("%d",&n);
    printf("o DECIMAL %d pra BINARIO eh: ",n);
    for(i=0;n!=0;i++)
    {
        bin[i]=n%2;
        n=n/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
    printf("\n");
}

// outra forma

/* Function to convert a decinal number to binary number */
long decimalToBinary(long n) {
    int remainder;
    long binary = 0, i = 1;

    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
//BIN2Dec
/* Function to convert a binary number to decimal number */
long binaryToDecimal(long n) {
  //potencia
    float result=1,x=8;
    long z=2;
    for(int i=1;i<=z;i++){
        result=x*result;
        }
        //bin2dec
    int remainder;
    long decimal = 0, i=0;
    while(n != 0) {
        remainder = n%10;
        //result = n%10;
        n = n/10;
     //   decimal =  decimal +(result*z);
       decimal = decimal + (remainder*pow(2,i));
        ++i;
    }
    return decimal;
}

int main() {
   Dec2Bin();
    //main do dec 2 bin
    long decimal;
    printf("Digite outro DECIMAL\n");
    scanf("%ld", &decimal);
    printf("Binary number of %ld is %ld\n\n", decimal, decimalToBinary(decimal));
 //end
    //main BIN2dec
    long binary;
    printf("Digite um Num BINARIO\n");
    scanf("%ld", &binary);
    printf("O Binario %ld eh = %ld em Decimal", binary, binaryToDecimal(binary));

    return 0;
}