#include<stdio.h>
  divide(int a[int n])
{
    int mid;
    int j=0;

    if(n%2!=0)
    {
        mid=(n+1)/2;
    }
    else
    {
       mid=n/2;
    }
    int left[mid],right[n-mid];
    for(int i=0;i<mid;i++)
    {
        left[i]=a[i];
    }
    for(int i=mid;i<n;i++)
    {
        right[j]=a[i];
        j++;
    }






}

void main()
{
    int n,a[n],left,right;
    printf("Enter the size:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    arr1[],arr2[]=divide[a[n];
    c1=sizeof(arr1)/sizeof(arr[0]);
    c2=size0f(arr2)/sizeof(arr[0]);
    if(c1)



}
