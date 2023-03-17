#include<stdio.h>
int main()
{
    int n,temp,j;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    j=n-1;
    if(n%2!=0)
    {

        for(int i=0;i<(n/2)+1;i++)
        {

            if(arr[i]==arr[j])
            {
                printf("%d",arr[i]);
            }
            else
            {
                printf("%d ",arr[i]);
                printf("%d ",arr[j]);
                j--;
            }
        }
    }
    else
    {
        for(int i=0;i<(n/2);i++)
        {

            printf("%d ",arr[i]);
            printf("%d ",arr[j]);
            j--;
        }
    }
    return 0;
}
