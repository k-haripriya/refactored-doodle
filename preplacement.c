#include<stdio.h>
void main()
{
    int n,i,quo,rem;
    scanf("%d",&n);
    for(i=10;i<=n;i++)
    {
        rem=i%10;
        quo=i/10;
        if(quo-rem==1 || rem-quo==1)
        {
            printf("%d\n",i);
        }
    }
}
