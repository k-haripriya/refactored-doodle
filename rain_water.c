#include<stdio.h>
int main()
{
   int n,max=0,index=0,sec=0,pos=0,j,k,count=0,sum=0,x=0;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

   while(count<n)
   {
       max=0;
       sec=0;
       index=0;
       pos=0;

       for(int i=x;i<n;i++)
       {
           if(arr[i]>max)
           {
               max=arr[i];
               index=i;
           }
       }
       for(int i=x;i<n;i++)
       {
           if(arr[i]>sec && i!=index)
           {
               sec=arr[i];
               pos=i;
           }
       }

       if(index<pos)
       {
           j=index;
           k=pos;
       }
       else
       {
           j=pos;
           k=index;
       }

       for(int i=j+1;i<k;i++)
       {

           sum+=(sec-arr[i]);

           count++;
       }

       count=count+2;
       arr[index]=0;
       x=k;
   }
   printf("\n%d",sum);

}
