#include<stdio.h>
#include<math.h>
#define e 0.0000001
float g(float x)
{
return ((2-sin(x))/3);
}

int main()
{
printf("find the roots using fixed point method:\n");
float x1,x0,x2,c,err;
int i = 0;
printf("enter the initial value:");
scanf("%f",&x0);
printf("s.n\t\txQ\t\t£(x0)\t\tx1\n");
do
{
    x1=g(x0) ;
    printf("%d\t\t%f\t%f\t%f\n",i,x0, g (x0) , (x1));
    x2=x0;
    x0=x1;
    i++;
}while((fabs (x1-x2))/x1>e) ;
printf("roots=%f",x1);
return 0;
}