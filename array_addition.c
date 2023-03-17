#include<stdio.h>
void main()
{
    int a[5]={2,5,8,7,11};
    int b[5]={8,6,5,3,1};
    int c[5];
    int temp;
    for(int i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",c[i]);
    }

}
