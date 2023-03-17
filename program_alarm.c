#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i=i+4)
    {
        if(arr[i]==99)
        {
            break;
        }
        else if(arr[i]==1)
        {
            int a=arr[arr[i+1]]+arr[arr[i+2]];
            arr[arr[i+3]]=a;
        }
        else if(arr[i]==2)
        {
            int b=arr[arr[i+1]]*arr[arr[i+2]];
            arr[arr[i+3]]=b;
        }
    }
     for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
}
