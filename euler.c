#include<stdio.h>
#include<math.h>

# define f(x,y) y*x

int main()
{
 float xi,xf,h,y0=1,y;
 int i;
 printf("enter the maximum and minimum=");
 scanf("%f,%f",&xi,&xf);
 printf("\nenter the step size=");
 scanf("%f",&h);
 while(xi<xf)
 {
 y=y0+h*f(xi,y0);
 xi=xi+h;
 printf(" x=%f\t y=%f\n",xi,y);
 }
 
 return 0;
 }
 
