#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1416
#define f(x) sin(x)+1
int main()
{
	float angle,h,x,d,x1,x2;
	printf("Enter angle in degree\n");
	scanf("%f",&angle);
	printf("Enter increment\n");
	scanf("%f",&h);
	x = PI*angle/180;
	x1 = f(x+h);
	x2 = f(x);
	d = (x1-x2)/h;
	printf("The value of derivative =%f\n",d);
	getch();
	return 0;
}

