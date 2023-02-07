import math
x1= int(input('enter the maximum number'))
x2= int(input('enterthe minimum number'))
k=1
def function(x):
	t=x*x - x
	return t
while (k>10**(-10)):
	f1=function(x1)
	f2=function(x2)
	x3=(x1*f2-x2*f2)/(f2-f1)
	x1=x2
	x2=x3
	k=abs(f2)
print('answer=',x3)



