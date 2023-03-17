#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
        printf("%d ",count);
    }
}
