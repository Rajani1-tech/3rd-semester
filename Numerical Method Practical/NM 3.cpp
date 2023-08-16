#include<conio.h>
#include<stdio.h>
#include<math.h>
#define F(x) x*x+4*x-9
#define D(x) 2*x+4
#define E 0.001
int main()
{
	float x0,x1,f1,f2,r;
	int i=1;
	printf("Enter initial guess\n");
	scanf("%f",&x0);
	while(1)
	{
		f1 = F(x0);
		f2 = D(x0);
		x1 = x0-f1/f2;
		if((fabs(x1-x0)/x1)<E||i>=20)
		{
			r=x1;
			break; 
		}
		x0 = x1;
	}
	printf("The root =  %f",r);
	getch();
	return 0;
}

