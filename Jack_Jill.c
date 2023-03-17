#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100],c[100];
    scanf("%s",a);
    scanf("%s",b);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        for(int j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
               a[i]='\0';
               break;
            }

        }
    }
    for(int i=0;i<len;i++)
    {
        if(a[i]!='\0')
        {
            printf("%c",a[i]);
        }
    }
}
