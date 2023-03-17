#include<stdio.h>
int smallest(int *arr,int start,int end,int key)
{
    int temp;
    for(int i=start;i<end+1;i++)
    {
        for(int j=i+1;j<end+1;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int ans=arr[key-1];
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],s=0,e=n-1;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    int key,temp;
    scanf("%d",&key);

    int res=smallest(arr,s,e,key);
    printf("%d",res);


}
