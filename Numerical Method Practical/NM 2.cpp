#include<stdio.h> 

#include<conio.h> 

#include<math.h> 

#define E 0.001 

#define F(x)  x*x-4*x-10 

int main() 

{ 

    float x1,x2,x3,f1,f2,f3,r; 

    int i=0; 

    printf("Enter intial guesses\n"); 

    scanf("%f%f",&x1,&x2); 

    while(1) 

        { 

            f1 = F(x1); 

            f2 = F(x2);    

			x3 = x2- (f2*(x2-x1))/(f2-f1);            

  

              if(fabs((x3-x2)/x3)<E) 

              { 

                 r = x3; 

                 break; 

              }  

			  else 

			  { 

			  	x1 = x2; 

			  	x2 = x3; 

			  }  

			  i=i+1;   

        }         

        printf("The root = %f\n",r); 

        printf("f(%f) = %f\n",r,F(r)); 

        printf("Number of iterations = %d\n",i); 

        getch(); 

        return 0; 

} 
