#include <stdio.h>

int main() {
    printf("Ordem decrescente com if else\n");
   int n1,n2,n3;
    printf("digite 3 numeros: \n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1 >= n2 && n2 >= n3){
        printf("%d %d %d",n1,n2,n3);
    }
    if (n1 >= n3 && n3 >= n2){
        printf("%d %d %d",n1,n3,n2);
    }
    if(n2 >= n1 && n1 >= n3){
        printf("%d %d %d",n2,n1,n3);
    }
    if(n2 >= n3 && n3 >= n1){
        printf("%d %d %d",n2,n3,n1);
    }
    if(n3 >= n1 && n1 >= n2){
        printf("%d %d %d",n3,n1,n2);
    }
    if(n3 >= n2 && n2 >= n1){
        printf("%d %d %d",n3,n2,n1);
    }
    return 0;
}