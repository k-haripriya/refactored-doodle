#include<stdio.h>
int main()
{
    char s[25]="Rathinam technical campus";
    int *w=strtok(s," ");
    int *l;
   while(w!=NULL)
   {
       l=w;
       w=strtok(NULL," ");

   }
    printf("%s",l);
}
