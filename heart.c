#include<stdio.h>
int main()
{
    int s=7,st=7;
    for(int i=1;i<=7;i++)
    {
        for(int i=1;i<=s;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=st;i++)
        {
            printf("*");
        }

        for(int i=1;i<=s*2;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=st;i++)
        {
            printf("*");
        }
        if(i==1)
        {
            s=s-2;
            st=st+4;
        }
        else
        {
            s--;;
            st=st+2;
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<42;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    s=1,st=40;
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=st;j++)
        {
            printf("*");
        }
        printf("\n");
        s++;
        st=st-2;

    }
    st=10;
    int m=0;
    char str[18]="I  love   rathinam";
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=st;j++)
        {
            printf("*");
        }
        for(int j=1;j<=18;j++)
        {
            if(i==2)
            {
                printf("%c",str[m]);
                m++;
            }
            else

            {
                printf(" ");
            }
        }
        for(int j=1;j<=st-2;j++)
        {
            printf("*");
        }
        printf("\n");
        s++;
        st--;


    }
    st=30;
    for(int i=1;i<=14;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=st;j++)
        {
            printf("*");
        }
        s++;
        st=st-2;
        printf("\n");


    }

}
