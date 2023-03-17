#include<stdio.h>
int main()
{
    int n,f,k,fact,c=0;
    scanf("%d",&n);
    for(int i=2;i<19;i++)
    {
        f=0;
        if(n%i==0)
        {
            fact=i;
            for(int j=1;j<i;j++)
            {
                if(j*j==fact)
                {
                    f=0;
                    break;
                }
                else
                {
                    f=1;
                }
            }

        }
        if(f==1)
        {
           c++;
        }
    }
    printf("%d",c);
}
