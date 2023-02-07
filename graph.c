#include<math.h>
#include<stdio.h>
float f(float x)
{
float t;
t=x*x-2*x;
return t;
}

int main()
{
FILE * u=fopen("data1.txt","r");
FILE * g=fopen("data2.txt","r");
int count=0;
float f1,f2,x1,x2,x3,c;
float i;
printf("Enter the maximum number=");
scanf("%f",&x1);
printf("enter the minimum=");
scanf("%f",&x2);

while(fabs(f2)>0.0001)
{
f1=f(x1);
f2=f(x2);
x3=(x1*f2-x2*f2)/(f2-f1);
x1=x2;
printf("Test");
x2=x3;
fprintf(g," %f\n",x3);

count++;
}

fclose(g);
//printf("cout=%d\t x3=%f",count,x3);

while(fabs(x1-x2)>0.0001)
{
 if(f(x1)*f(x2)<0)
{
c=(x1+x2)/2;
if(f(c)*f(x1)>0)
{
x1=c;
}
if(f(x2)*f(c)>0)
{
x2=c;
}
fprintf(u,"%f\n",c);
}
fclose(u);
}
//printf("c=%f",c);
return 0;
}


