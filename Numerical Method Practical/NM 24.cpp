#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 3*x*x+2*x-5
int main()
{
	float x0,x1,x2,f0,f2,f1,i,h,a,r;	
	printf("Enter lower limit\n");
	scanf ("%f",&x0);
	printf ("Enter upper limit\n");
	scanf ("%f",&x2);
  	  h = (x2-x0)/2;
    	x1 = x0+h;
    	f0 = f(x0);
    	f1 = f(x1);
    	f2 = f(x2);
	i = (f0+4*f1+f2)*h/3;
	printf("The value of integration =%f\n",i);
	getch();
	return 0;
}



