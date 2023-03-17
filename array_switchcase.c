#include<stdio.h>
#define maxsize 10
int arr[maxsize],size;
int create()
{

    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return *arr;
}
void  display(int *n,int size)
{

    printf("The elements of the array are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void search(int *n)
{

    int ele,temp=0;
    printf("Enter an element to search:");
    scanf("%d",&ele);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            printf("Element is found at %d th position",i);
            temp++;
            break;
        }

    }
    if(temp==0)
    {
        printf("Element is not found");
    }
}

int insert(int *n)
{

    int ele,pos,temp;

    printf("Enter an element to be inserted:");
    scanf("%d",&ele);
    printf("Enter the position:");
    scanf("%d",&pos);

    for(int i=size-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[pos-1]=ele;

    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }
    size=size+1;
    return *arr,size;

}

int delete(int *n)
{

    int ele,pos;
    printf("Enter an element to be deleted:");
    scanf("%d",&ele);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
           pos=i;
        }
    }
    for(int i=pos;i<size;i++)
    {
       arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++)
    {
        printf("%d ",arr[i]);
    }
    size=size-1;
    return *arr,size;

}
int main()
{
    printf(" 1.Create an array\n 2.Display the array\n 3.Search an element in the array\n 4.Insert an element in the array\n 5.Delete an element from the array\n 6.Exit");
    int ch=1;

    while(ch!=6)
    {
        int *n;
        printf("\n\nEnter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:n=create();
                    break;
            case 2:display(n,size);
                    break;
            case 3:search(n);
                    break;
            case 4:n,size=insert(n);
                    break;
            case 5:n,size=delete(n);
                    break;
            case 6:printf("EXIT");
                    break;
        }
    }

}
