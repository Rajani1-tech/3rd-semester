#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.001
#define F(x)  x*x-6*x+8
#define G(x) x*x-5*x+8
int main()
{
    float x0,x1,r;
    int i=0;
    printf("Enter intial guess\n");
    scanf("%f",&x0);
    while(1)
    {
    	x1 = G(x0);
    	if((fabs(x1-x0)<E)||i>=30)
    	{
    	   r=x1;
		   break;	
		}
		else 
		{
			x0 = x1;
		}
		i=i+1;
	}
	printf("The root = %f\n",r);
	printf("The number of iterations =%d",i);
        getch();
        return 0;
}

