#include<stdio.h>
#include<math.h>
#define e 0.001
int main()
{
    int i,j,n;
    float a[10][10],z[10],x[10],error,oldvalue,zmax=1;
    printf("Enter the order of matrix:");
    scanf("%d",&n);
    printf("Enter the element of matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("Enter the eigen vector:");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x[i]);
    }
    do
    {
        for(i=0;i<=n;i++)
    {
        z[i]=0;
        for(j=0;j<=n;j++)
        {
            z[i]=z[i]+a[i][j]*x[j];
        }
    }
    oldvalue=zmax;
    zmax=fabs(z[1]); 
    for(i=2;i<=n;i++) 
    {
        if(fabs(z[i])>zmax)
        {
            zmax=fabs(z[i]);
        }
    }
    error=fabs(zmax-oldvalue);
    for(i=0;i<=n;i++)
    { 
        z[i]=z[i]/zmax;
    }
    for(i=1;i<=n;i++)
    {
    x[i]=z[i];
    }
    }while(error>e);
    printf("Eigen value:\t");
    printf("%f\n",zmax);
    printf("Eigen vector:\n");
    for(i=1;i<=n;i++)
    {
        printf("%f\n",z[i]);
    }
    return 0;
}
