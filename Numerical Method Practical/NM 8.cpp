#include<stdio.h>
#include<conio.h>
#define P(x) (a[4]*x*x*x*x+a[3]*x*x*x+a[2]*x*x+a[1]*x+a[0])
float a[30],b[30];
int main()
{
	float x;
	int i,n;
	printf("Enter degree of polynomial\n");
	scanf("%d",&n);
	printf("Enter %d coefficients of dividend polynomial\n",n+1);
	for(i=n;i>=0;i--)
	{
	   scanf("%f",&a[i]);		
	}
	printf("Enter the polynomial at which polynomial to be evaluated\n");
	scanf("%f",&x);
	b[n]=a[n];
	while(n>0)
	{
		b[n-1] = a[n-1]+b[n]*x;
		n = n-1;
	}
	printf("Value of polynomial p(%f)= %f",x,b[0]);
	getch();
	return 0;
}

