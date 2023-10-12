#include <stdio.h>
int main(){
int a[100][100],sum,i,j,k,r1,c1,r2,c2,b[100][100],c[100][100];
printf("enter the row and coloumn of the first matrix");
scanf("%d%d",&r1,&c1);
printf("enter the value of matrix 1");
for ( i = 0; i < r1; i++)
{
    for ( j = 0; j < c1; j++)
    {
    scanf("%d",&a[i][j]);
    }
    
}
printf("enter the row and coloum of the second matrix");
scanf("%d%d",&r2,&c2);
printf("enter the value of thr second matrix");
for ( i = 0; i < r2; i++)
{
    for( j = 0; j < c2; j++)
    {
        scanf("%d",&b[i][j]);
    }
    
}
if (c1==r2)
{
    printf("the multi matris is ");
                  for ( i = 0; i < r1; i++)
                  {
                    for ( j = 0; j < c2; j++)
                    {
                        sum=0;

                        for ( k = 0; k < r2; k++)
                        {
                            sum=sum+(a[i][k]*b[k][j]);
                        }
                        c[i][j]=sum;
                    }
                    
                  }
                  

for ( i = 0; i < r1; i++)
{
    for( j = 0; j < c2; j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}



}

}