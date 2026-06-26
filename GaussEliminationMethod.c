#include <stdio.h>
int main() {
float c,a[10][10],x[10],sum=0;
int i,j,k,n;
printf("enter the nth order");
scanf("%d",&n);
printf("enter the coefficients of the augmented martix\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n+1;j++)
    {
        scanf("%f",&a[i][j]);
    }
}
for(j=1;j<=n;j++)
{
    for(i=1;i<=n;i++)
    {
        if(i>j)
        {
            c=a[i][j]/a[j][j];
            for(k=1;k<=n+1;k++)
            {
                a[i][k]=a[i][k]-c*a[j][k];
            }
        }
    }
}
x[n] = a[n][n + 1] / a[n][n];
printf("unpper triangluar matrix is:\n");
for ( i = 1; i <= n ;i++)
{
for(j=1;j<=n+1;j++)
{
printf("%f\t",a[i][j]);
}
printf ("\n" );
}
for(i=n-1;i>=1;i--)
{
sum=0;
for(j=i+1;j<=n;j++)
{
sum=sum+(a[i][j]*x[j]);
}
x[i]=(a[i][n+1]-sum)/a[i][i];
}
printf("required solution is:\n");
for(i=1;i<=n;i++)
{
printf("x%d=%.2f\n",i,x[i]);
}
return 0;
}
