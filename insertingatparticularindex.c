#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int ele;
    scanf("%d",&ele);
    int pos;
    scanf("%d",&pos);
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];

    }
    a[pos]=ele;
    for(int i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }

}
