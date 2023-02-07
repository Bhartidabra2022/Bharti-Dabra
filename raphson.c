#include<stdio.h>
#include<math.h>
 float f(float x)
 {
 float y;
 y=sin(x)-x*cos(x);
 return y;
 }
  float g(float x)
  {
  float t;
  t=x*sin(x);
  return t;
  }
  
 int main()
 {
 float x0,h,x1,acc=0.0001,f1,f2,f3;
 printf("Enter the initial guess=");
 scanf("%f",&x0);
 if(g(x0)==0)
 {
 printf("enter value is not sufficient choose another one ");
 }
 else
 do
 {
  f1=f(x0);
 f2=g(x0);
 h=f1/f2;
 x1=x0-h;
 x0=x1;
 f3=f(x1);
 }
 while(f3>acc);
 {
 printf("root=%f",x1);
 }
 return 0;
 
 }
 
 

 
 
  
