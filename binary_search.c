#include<stdio.h>
int main()
{
    int n,temp,ele,mid;
    scanf("%d",&n);
    int low=0,high=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     mid=(low+high)/2;
    while(mid>=low || mid<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            printf("Element is present at %d position",mid+1);
            break;
        }
        else if(ele<arr[mid])
        {

            high=mid-1;
        }
        else
        {
            low=mid+1;

        }
    }

}
