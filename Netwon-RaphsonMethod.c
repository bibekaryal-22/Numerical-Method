#include<stdio.h>
#include<math.h>
#define e 0.0000001
float f(float x)
{
return (sin(x)+cos(x)+exp(x)-8);
}
float ff (float x)
{
return (cos(x)-sin(x)+exp(x));
}
int main()
{
float x0,x1,c;
int i=0;
printf("enter initial value:");
scanf("%f", &x0);
printf("s.no\t\txQ\t\f(x0)\t\tfd(x0)\t\txl\n");
do
{
x1=x0-(f(x0)/ff(x0));
c=x0;
x0=x1;
i++;
printf("%d\t\t%f\t%f\t%f\t%f\n", i,x0,f(x0),ff(x0),x1);
} while (fabs(c-x0)>e);
printf("roots:%f",x1);
}