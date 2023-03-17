#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         char str[20];
       scanf("%[^\n]%*c", str);
       printf("%s", str);
    }


   return 0;
}
