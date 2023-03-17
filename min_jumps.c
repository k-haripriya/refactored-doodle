#include<stdio.h>
int min(int *arr,int n)
{
   int steps=1,f=0;
   for(int i=0;i<n;i=i)
   {
       i=i+arr[i];
       if(i>=n-1)
       {
           f=1;
           return steps;
       }
       else
       {
            steps++;
       }
   }
   if(f==0)
   {
       return -1;
   }

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=min(arr,n);
    printf("%d",ans);
}

