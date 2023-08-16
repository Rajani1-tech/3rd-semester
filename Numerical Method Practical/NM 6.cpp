#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a[30],b[30];
    int i, m, n, c;
    printf ("Enter degree of polynomial\n");
    scanf ("%d",&n);
    printf ("Enter coefficients of dividend polynomial\n");
    for(i=n; i>=0;i--)
    {
    	scanf("%d", &a[i]);
    }
	printf ("Enter the constant term of divisor polynomial\n");
	scanf ("%d", &c);
	b[n]=0;
	m=n;
	while(m>0)
	{
		b[m-1]=a[m]+b[m]*c;
		m = m-1;
	}
	printf ("Quotient:");
	m = n-1;
	while(m>=0)
	{
		if(b[m]!=0)
		printf("%dx^%d+",b[m],m);
		m = m-1;
	}
	getch();
	return 0;	
}

