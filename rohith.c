#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,rem,count,sum=0;
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("The sum is %d",c);
        while(c>0)
        {
            rem=c%10;

            switch(rem)
            {
                case 0:count=6;
                        break;
                case 1:count=2;
                        break;
                case 2:count=5;
                        break;
                case 3:count=5;
                        break;
                case 4:count=4;
                        break;
                case 5:count=5;
                        break;
                case 6:count=6;
                        break;
                case 7:count=3;
                        break;
                case 8:count=7;
                        break;
                case 9:count=6;
                        break;
            }
            sum=sum+count;
            c=c/10;
        }
        printf("\n%d",sum);
    }
}
