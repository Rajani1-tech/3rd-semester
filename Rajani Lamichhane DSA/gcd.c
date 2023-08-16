#include<stdio.h>
int main()
{
  int x,y,g;
  printf("Enter the value of x and y:");
  scanf("%d%d", &x, &y);
  g=HCF(x,y);
  printf("\n HCF of (%d and %d)=%d",x,y,g);
  return 0;
    }
int HCF(int x, int y)
{
    if(y==0)
        return x;
else
    return (HCF(y,x%y));
}
