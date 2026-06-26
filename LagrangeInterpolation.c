#include<stdio.h>
int main()
{
    int i, j, n;
    float z[10], y[10], x[10], error, xvalue, yvalue=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("Enter the valye of x and y:\n");

    for(i=0;i<=n-1;i++)
    {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("y[%d]: ", i);
        scanf("%f", &y[i]);
    }

    printf("Enter the value of x for interpolation:");
    scanf("%f", &xvalue);

    for(i=0;i<=n-1;i++)
    {
        z[i]=1;
        for(j=0;j<=n-1;j++)
        {
            if(i!=i)
            {
                z[i]=z[i]*(xvalue-x[j])/(x[i]-x[j]);
            }
        }
    }

    for(i=0;i<=n-1;i++)
    {
        yvalue=yvalue+(z[i]*y[i]);
    }
    
    printf("The value of f(%f) is:", xvalue);
    printf("%f", yvalue);
}