#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter the size:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n==1)
    {
       printf("The first peak element is:%d",arr[0]);
    }
    else if(arr[0]>arr[1])
    {
        printf("The first peak element is:%d",arr[0]);
    }
    else if(arr[n-1]>arr[n-2])
    {
        printf("The first peak element is:%d",arr[n-1]);
    }
    else
    {
        for(int i=1;i<n;i++)
            {
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                {
                    printf("The first peak element is:%d",arr[i]);
                    break;
                }
            }

    }

    return 0;
}
