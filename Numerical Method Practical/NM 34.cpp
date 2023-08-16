#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f1(x, y, z)    z
#define f2(x, y, z) 6*(x)+3*(y)-2*(z)
int main()
{
	float xp, x0,y0,z0,x,y,z,h,m1,m2;
	printf("Enter initial value of x and y and z\n");
	scanf("%f%f%f",&x0,&y0,&z0);
	printf("Enter the value at which function is to be evaluated\n");
	scanf("%f",&xp);
	printf("Enter step size\n");
	scanf("%f",&h);
	y = y0;
	x = x0;
	z = z0;	
	for(x=x0;x<xp;x=x+h)
	{
		m1 = f1(x,y,z);	
		m2 = f2(x,y,z);		
		y = y+m1*h;
		z = z+m2*h;			
	}
	printf("Function value x at %f =%f", x, y);
	getch();
	return 0; 
}

