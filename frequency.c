#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {

        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=0;
            }
        }
        if(count>n/2 && arr[i]!=0)
        {
            printf("%d",arr[i]);
        }

    }
    return 0;
}
