
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,k,m,n;
	float a[20][20],b[20],z[20],x[20],fx[20];
	float sum, pivot, term;
	printf("Enter number of data points\n");
	scanf("%d",&n);
	printf("Enter degree of polynomial\n");
	scanf("%d",&m);
	printf("Enter data points\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&x[i],&fx[i]);
	}
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=m;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum = sum+pow(x[k],i+j);
			}
			a[i][j]=sum;
		}	
	for(i=0;i<=m;i++)
	{
		sum=0;
		for(k=0;k<n;k++)
		{
			sum = sum+fx[i]*pow(x[k],i);
		}
		b[i]=sum;
	}
	for(k=0;k<m;k++)
	{
		pivot = a[k][k];
		if(pivot<0.0001)
		printf("Method failed");
		else
		for(i=k+1;i<=m;i++)
		{
			term = a[i][k]/pivot;
			for(j=0;j<=m;j++)
			{
				a[i][j]=a[i][j]-a[k][j]*term;
			}
			b[i]=b[i]-b[k]*term;
		}
	}
}
	z[m] = b[m]/a[m][m];
	for(i=m-1;i>=0;i--)
	{
		sum=0;
		for(j=i+1;j<=2;j++)
		{
		   sum = sum+a[i][j]*z[j];	
		}
		z[i]=(b[i]-sum)/a[i][i];
	}
	printf("The polynomial of regression is :\n");
	printf("y=%f+%fx",z[0],z[1]);
	for(i=2;i<=m;i++)
	{
		printf("+%fx^%d",z[i],i);
	}
	getch();
	return 0;
}


