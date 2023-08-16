#include<stdio.h>
#include<conio.h>
#define f(x,y) 2*(y)/(x)
int main()
{
	float x, xp, x0,y0, y,h,m1,m2;
	printf("Enter initial value of x and y\n");
	scanf("%f%f",&x0,&y0);
	printf("Enter the value at which function is to be evaluated\n");
	scanf("%f",&xp);
	printf("Enter step size\n");
	scanf("%f",&h);
	y = y0;
	x = x0;
	for(x=x0;x<xp;x=x+h)
	{
		m1 = f(x,y);
		m2 = f(x+h,y+h*m1);
		y = y+h/2*(m1+m2);
	}
	printf("Function value at x %f =%f",x,y);
	getch();
	return 0;
}

