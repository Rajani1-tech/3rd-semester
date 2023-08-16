#include<stdio.h>
#include<conio.h>
#define F(x) (x*x*x+3)
int main()
{
	float h, x0,x1,x2,x,v,f0,f1;
	printf("Enter upper limit and lower limit\n");
	scanf("%f%f",&x1,&x0);
	h = x1-x0;
	f1 = F(x1);
	f0 = F(x0);
	v = h*(f0+f1)/2;
	printf("The value of integration = %f",v);
	getch();
	return 0;
}

