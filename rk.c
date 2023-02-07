#include<math.h>
#include<stdio.h>
#include<stdlib.h>
float f(float(x), float(y))
{
	float c;
	c=x*x + y*y;
	return c;
}

int main()
{
float x0,k1,k2,k3,k4,y0,y,h=0.05;
x0=1;
y0=1.2;
k1=h*f(x0,y0);
k2=h*f(x0+h/2, y0+k1/2);
k3=h*f(x0+h/2,y0+k2/2);
k4=h*f(x0+h,y0+k3);
y=y0+(k1+2*k2+2*k3+k4)/6;
printf("k1=%f\t k2=%f\t k3=%f\t k4=%f\t y=%f\n",k1,k2,k3,k4,y);
return 0;
}

