#include<stdio.h>
int reverse(int x)
{
    int rem,rev=0;
    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }

    return rev;
}

void main()
{
    int a,b,res;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        res=reverse(i);

        if(res==i)
        {
            printf("%d ",i);
        }


    }
}
