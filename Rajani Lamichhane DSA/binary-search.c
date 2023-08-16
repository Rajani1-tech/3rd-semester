#include<stdio.h>
int binarysearch(int a[],int l,int h,int key)
{
    int mid;
    if(l>h)
    {
        printf("\n Search failure");
    }
    mid=(l+h)/2;
    if(key<a[mid])
        binarysearch(a,l,mid-1,key);
    else if(key<a[mid])
        binarysearch(a,mid+1,h,key);
    else
        {
        printf("\n Search successful");
    return mid+1;
    }
}
int main()
{
    int a[50],n,i,l,h,loc,key;
    printf("Enter the value of n:");
   scanf("%d",&n);
    printf("\nEnter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the key:");
    scanf("%d",&key);
    l=0;
    h=n-1;
    loc=binarysearch(a,l,h,key);
    printf("\n key %d is at location %d",key,loc);
    return 0;
}

