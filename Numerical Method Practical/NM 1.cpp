#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.00001
#define F(x)  x*x-4*x-10
int main()
{
    float x1,x2,x0,f1,f2,f0,r;
    printf("Enter intial guesses\n");
    scanf("%f%f",&x1,&x2);
    f1 = F(x1);
    f2 = F(x2);
    if(f1*f2>0)
    {
      printf(" Initial guesses do not bracket roots\n");
    }
    else
    {
        while(1)
        {
            x0 = (x1+x2)/2;
            f0 = F(x0);
            if(f1*f0<0)
            {            
               x2 = x0;
               f2 = f0;
            }
             else
             {
                x1 = x0;
                f1 = f0;
             }

              if(fabs(x2-x1)<E)
              {
                 r = x2;
                 break;
              }    
        }
        
        printf("The root = %f\n",r);
        printf("f(%f) = %f\n",r,F(r));
        getch();
        return 0;
    }
}

