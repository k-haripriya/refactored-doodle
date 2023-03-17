#include<stdio.h>
int main()
{
    int n,m;
    float med;
    scanf("%d %d",&n,&m);
    int arr[n],arr1[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int j=n;
    for(int i=0;i<m;i++)
    {
        arr[j]=arr1[i];
        j++;
    }
    printf("The merged array is:\n");
    for(int i=0;i<n+m;i++)
    {
        printf("%d ",arr[i]);
    }
    int n1=n+m;
    if(n1%2!=0)
    {
        med=arr[n1/2];
        printf("The median is %.2f",med);
    }
    else
    {
        med=(float)(arr[n1/2]+arr[(n1/2)-1])/2;
        printf("The median for even number is %.2f",med);
    }
}
