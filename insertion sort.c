#include<stdio.h>
int insertion(int *arr,int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<=arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

    }
    return arr;

}

int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    int *a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    a=insertion(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }




}
