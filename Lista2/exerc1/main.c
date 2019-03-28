#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("1 == verdadeiro\n0 == falso\n");
    //  Considerando a seguinte linha de código,
    // assinalar V ou F para as expressões a seguir:
    int NUM1 = 10, NUM2 = 2, NUM3 = 200, NUM4 = 200;



    bool a = NUM1 > NUM2;
    bool b = NUM1 < NUM3;
    bool c = NUM1 < NUM4;
    bool d = NUM3 == NUM4;
    bool e = NUM2 <= NUM3;
    bool f = NUM3 >= NUM4;
    bool g = NUM1 + NUM2 > NUM3;
    bool h = NUM1 * NUM2 < NUM4;
    bool i = NUM3 - NUM4 != NUM4;
    bool j = NUM3 / NUM1 < NUM4;
    bool k = NUM1 / NUM2 > 0 && NUM1 + NUM3 > NUM4;
    bool l = NUM1 * NUM2 > 40 && NUM3 - NUM1 > NUM4;
    bool m = NUM1 - NUM2 == 10 && NUM2 + NUM3 > NUM4;
    bool n = NUM1 + NUM2 < 10 && NUM3 - NUM4 == NUM1;
    bool o = NUM3 / NUM2 > 0 || NUM1 + NUM3 > NUM4;
    bool p = NUM2 * NUM1 == 50 || NUM3 - NUM1 > NUM4;
    bool q = NUM1 - NUM2 > 10 || NUM2 + NUM3 > NUM4;
    bool r = NUM1 + NUM2 > 10 || NUM3 / NUM1 > NUM4;
    bool s = NUM1 > NUM2 && NUM2 < NUM3 || NUM3 < NUM4;
    bool t = NUM1 * NUM2 > 10 && NUM1 > NUM4 || NUM3 - NUM1 > NUM4;
    bool u = NUM1 > 10 || NUM1 > NUM4 && NUM3 - NUM1 > NUM4;
    bool v = NUM1 + NUM2 > 10 || NUM1 / NUM3 > NUM4 && NUM3 < NUM4;

    printf("respostas!\n a) == %d\n b) == %d\n c) == %d\n d) == %d\n e) == %d\n f) == %d\n g) == %d\n h) == %d\n i) == %d\n j) == %d\n k) == %d\n l) == %d\n m) == %d\n n) == %d\n o) == %d\n p) == %d\n q) == %d\n r) == %d\n s) == %d\n t) == %d\n u) == %d\n v) == %d  \n", a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v);

    return 0;
}