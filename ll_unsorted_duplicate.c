#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*head,*temp,*temp1,*temp2,*i,*j;

void main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        new->prev=NULL;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            new->prev=temp;
            temp->next=new;
            temp=new;
        }

    }
    temp=head;
    temp1=head;
    for(i=temp;i->next!=NULL;i=i->next)
    {
        for(j=temp->next;j->next!=NULL;j=j->next)
        {
            if(i->data==j->data)
            {
                temp1=j->prev;
                temp1->next=j->next;
            }
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
