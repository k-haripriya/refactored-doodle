#include<stdio.h>
int main()
{
    int n,count,c=0,ele;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]!=0 && arr[i]==arr[j])
            {
                count++;
                arr[j]=0;
            }
        }
        if(count>c)
        {
            c=count;
            ele=arr[i];
        }
    }
    if(c>=(n/2))
    {
        printf("The majority element is: %d",ele);
    }
}
