#include<stdio.h>
void main()
{
    int n,temp,size1,size2,x=0,y=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int* odd=(int*)malloc(100*sizeof(int));
    int* even=(int*)malloc(100*sizeof(int));
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
           odd[j]=arr[i];
           j++;
        }
        else
        {
           even[k]=arr[i];
           k++;
        }

    }

    size1=sizeof(odd)/sizeof(odd[0]);
    size2=sizeof(even)/sizeof(even[0]);

    for(int i=0;i<size1;i++)
    {

        for(int j=i+1;j<size1;j++)
        {

            if(odd[i]<odd[j])
            {
                temp=odd[i];
                odd[i]=odd[j];
                odd[j]=temp;
            }
        }
    }
    for(int i=0;i<size2;i++)
    {
        for(int j=i+1;j<size2;j++)
        {

            if(even[i]>even[j])
            {
                temp=even[i];
                even[i]=even[j];
                even[j]=temp;
            }
        }
    }

   while(size1!=0 || size2!=0)
   {
      if(size1!=0)
      {
          printf("%d ",odd[x]);
          x++;
          size1--;
      }
      if(size2!=0)
      {
          printf("%d ",even[y]);
          y++;
          size2--;
      }
   }
}
