#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*new,*head,*temp;
void main()
{
    int n,mid;
    printf("Enter the size:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;

        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {

            temp->next=new;
            temp=new;
        }

    }
    if(n%2==0)
    {
        mid=(n/2)+1;

    }
    else
    {
        mid=(n+1)/2;
    }
    temp=head;
    for(int i=1;i<mid;i++)
    {
        temp=temp->next;
    }
    printf("%d",temp->data);

}
