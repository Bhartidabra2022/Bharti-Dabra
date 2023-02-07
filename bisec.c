#include<math.h>
#include<stdio.h>
#include<stdlib.h>

float f(float x)
{
float y;
y=sin(x)-x*cos(x);
return y;
}

int main()
{
float x,a,b,c,x1,x2,x3,z;
int i,n;
float xinc=0.5;
printf("enter the minimum no.");  //helps to find out the value of function so we can choose any value between a and b in which function is +ve and -ve
scanf("%f",&a);
printf("enter the maximum no.");
scanf("%f",&b);
for(x=a;x<=b;x=x+0.1)
{
printf(" x=%f\t f(x)=%f\n",x,f(x));
}

printf("Enter the number of roots"); //no. of roots
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the x1 and x2");
scanf("%f, %f",&x1,&x2);
for(x=x1;x<=x2;x=x+xinc)
{
if(f(x)*f(x+xinc)<0)
{
x1=x;
x2=x+xinc;
do
{
x3=(x1+x2)/2.0;
if (f(x1)*f(x3)>0)
{
x1=x3;
}
if(f(x1)*f(x3)<0)
{
x2=x3;
}
z=fabs((x1-x2)/(x1+x2));

printf("roots=%f\t f(root)=%f\t z=%f\n",x3,f(x3),z);
}
while(z>0.00001);
{
printf("\nroot=%f\t f(root)=%f\t z=%f\n",x3,f(x3),z);
}
return 0;
}
}
}
}

