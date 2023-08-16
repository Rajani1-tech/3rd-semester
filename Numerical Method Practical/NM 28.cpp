#include<conio.h>
#include<stdio.h>
#include<math.h>
#define N 10
int main()
{
	int n,i,j,k,p,q;
	float a[N][N],b[N],x[N];
	float pivot, term, sum=0;
	printf("Enter Dimension of systems of equations\n");
	scanf("%d",&n);
	printf("Enter coefficient matrix row wise\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter RHS vector\n");
	for(i=0;i<n;i++)
	scanf("%f",&b[i]);
	for(k=0;k<=n-2;k++)
	{
		pivot = a[k][k];
		if(fabs(pivot)<0.000001)
		{
			printf("Method failed");
			
		}
		else		
			for(i=k+1;i<n;i++)
			{
				term = a[i][k]/pivot;
				for(j=0;j<n;j++)
				{
					a[i][j] = a[i][j]-a[k][j]*term;
				}
				b[i] = b[i]-b[k]*term; 
			}			
	}
		x[n-1] = b[n-1]/a[n-1][n-1];
		for(i=n-2;i>=0;i--)
		{
			sum = 0;
			for(j=i+1;j<=n-1;j++)
			{
				sum = sum+a[i][j]*x[j];
			}
			x[i] = (b[i]-sum)/a[i][i];
		}
		printf("The solution vector....\n");
		for(i=0;i<n;i++)
		{
			printf("x%d = %f\n",i+1,x[i]);
		}
		getch();
		return 0;
	}

