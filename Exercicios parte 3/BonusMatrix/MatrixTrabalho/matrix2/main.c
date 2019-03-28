#include <stdio.h>


//#define M 10
//#define N 10
//void mul_mat(int A[m][n],int B[m][n],int C[m][n],int s,int t,int u,int v);
void mul_mat(int A[M][N],int B[M][N],int C[M][N],int s,int t,int u,int v)
{
    int i,j,k;
    if(t!=u)
    {
        printf("\nNot possible");

    }
    else
    {
        for(i=0;i<s;i++)
        {
            for(j=0;j<v;j++)
            {
                C[i][j]=0;
                for(k=0;k<v;k++)
                {
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }

        }

    }
    printf("\nThe resulting matrix:\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("==== Matriz M x N =====\n Digite as dimensoes da matriz: ?");
    scanf("%d %d",&m,&n);
    printf("\nA matriz contem %d linhas e %d Colunas\n",m,n);
    int matrix[m][n];
int a[m][n],b[m][n],c[m][n];
int i,j;//for indexing
int m,n,p,q;

printf("\nEnter the rows and columns of first matrix:");
scanf("%d%d",&m,&n);
printf("\nEnter the rows and columns of second matrix");
scanf("%d%d",&p,&q);
printf("\nEnter the first matrix:");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
printf("\na[%d][%d]=",i+1,j+1);
scanf("%d",&a[i][j]);
}
printf("\nEnter the second matrix:\n");
for(i=0;i<p;i++)
for(j=0;j<;q;j++)
{
printf("\nb[%d][%d]=",i+1,j+1);
scanf("%d",&b[i][j]);
}
mul_mat(a,b,c,m,n,p,q);//function calling
    return 0;
}


