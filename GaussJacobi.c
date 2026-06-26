#include<stdio.h>
#include<math.h>
#define f * 1(x, y, z)(15 - y - z) / 10
#define f * 2(x, y, z)(24 - x - z) / 10
#define f * 3(x, y, z)(33 - x - y) / 10

int main()
{
float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3,e;
int i=1;
printf("Enter the allowed number:\n");
scanf("%f",&e);
printf("\ni\tx\t\t\ty\t\t\tz\n");
do
{
    x1=f1(x0,y0,z0);
    y1=f2(x0,y0,z0);
    z1=f3(x0,y0,z0);

    printf("%d\t%f\t%f\t%f\n",i,x1,y1,z1);

    e1=fabs(x0-x1);
    e2=fabs(y0-y1); 
    e3=fabs(z0-z1); 
    i++;

    x0=x1;
y0=y1;
z0=z1;
}while(e1>e && e2>e && e3>e);
printf("\nsolution:x=%f,y=%f and z=%f\n",x1,y1,z1);
return 0;
}