#include<stdio.h>
int main()
{
    int n=2,temp,p1=1,p2=1;

    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                p1=p1*arr[i][j];
            }
            else if(i+j==n-1)
            {
                p2=p2*arr[i][j];
            }
        }
    }

    int mod=p1-p2;

    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            if(i==j)
            {
                temp=arr[i][j];
                arr[i][j]=arr[i+1][j+1];
                arr[i+1][j+1]=temp;

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                arr[i][j]=-1*arr[i][j];
            }

        }
    }

    float arr1[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            arr1[i][j]=(float)arr[i][j]/mod;
            printf("%.1f ",arr1[i][j]);
        }
        printf("\n");
    }

}
