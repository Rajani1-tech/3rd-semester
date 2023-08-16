#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	float val, x[10],fx[10],fd[10],h,s1,s2,x1,x2,a,b,c;
	printf("Enter the number of poinnts\n");
	scanf("%d",&n);
	printf("Enter values of x and fx\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&x[i],&fx[i]);
	}
	h = x[1]-x[0];
	for(i=0;i<n;i++)
	{
		fd[i]=fx[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			fd[j]=(fd[j]-fd[j-1]);
		}
	}
	a = (1/2.0)*fd[3];
	c = fd[1]-((1/2.0)*fd[2])+((1/3.0)*fd[3]);
	b = fd[2]-fd[3];
	s1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	s2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	x1 = x[0]+s1*h;
	x2 = x[0]+s2*h;
	val = (fd[2]+(((6*s1-6)*fd[3])/6))/(h*h);
	if(val<0)
	printf("Maxima exists at x =%f\n",x1);
	else
	printf("Minima exists at x =%f\n",x1);
	val = (fd[2]+(((6*s2-6)*fd[3])/6))/(h*h);
	if(val<0)
	printf("Maxima exists at x =%f\n",x2);
	else
	printf("Minima exists at x =%f\n",x2);
	getch();
	return 0;
}

