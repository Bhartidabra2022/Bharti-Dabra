#include<stdio.h>
#include<math.h>
double f(double x)
{
double y;
y=x*x-5;
return y;
}

int main()
{
double a,b,c;
printf("Enter the first assump integer");
scanf("%lf",&a);
printf("Enter the second assump integer");
scanf("%lf",&b);
if(f(a)*f(b)>=0)
{
printf("choice another one ");
}
else
{
while(fabs(a-b)>0.0001)
{
c=(a+b)/2;
if(f(a)*f(c)>0)
{
a=c;
}
if(f(b)*f(c)>0)
{
b=c;
}
}
}
printf(" root =%lf",c);
return 0;
}

