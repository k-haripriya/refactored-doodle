#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,sum,prod;
    printf("Enter the row size of array1:");
    scanf("%d",&r1);
    printf("Enter the column size of array1:");
    scanf("%d",&c1);
    printf("Enter the row size of array2:");
    scanf("%d",&r2);
    printf("Enter the column size of array2:");
    scanf("%d",&c2);

    int arr1[r1][c1];
    int arr2[r2][c2],arr3[r1][c2];
    printf("Enter the first array elements:");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }

    }
    printf("Enter the second array elements:");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }

    }
    printf("The output is:\n");
    for(int i=0;i<r1;i++)
    {

        for(int j=0;j<c2;j++)
        {
            sum=0;
            for(int k=0;k<c1;k++)
            {
                prod=arr1[i][k]*arr2[k][j];
                sum=sum+prod;

            }
            arr3[i][j]=sum;
        }

    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

}
