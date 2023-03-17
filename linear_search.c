#include<stdio.h>
int main()
{
    int n,s,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element to be searched:");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            printf("Element is present at %d position",i+1);
            temp++;
            break;
        }

    }
    if(temp==0)
    {
        printf("Element not present");
    }
    return 0;

}
