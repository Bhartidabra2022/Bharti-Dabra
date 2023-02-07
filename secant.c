#include<stdio.h>
#include<math.h>

float f(float x)
{
float t;
t=sin(x)-x*cos(x);
return t;
}

int main()
{
float x1,x2,x3,t,acc=0.0001,x,a,b,f1,f2;
int i,n;
printf("Enter the a=minimum and b=maximum values=");
scanf("%f,%f", &a,&b);

for(x=a;x<=b;x+=0.5)
{
printf("x=%f\t f(x)=%f\n",x,f(x));
}
printf("\nEnter the no. of roots=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the x1=minimum and x2=maximum values=");
scanf("%f,%f", &x1,&x2);
do
{
f1=f(x1);
f2=f(x2);
x3=(x1*f2-x2*f2)/(f2-f1);
x1=x2;
x2=x3;
t=fabs(f2);
}
while(t>0.0001);
{
printf("roots=%f\n",x2);
}
}
}

