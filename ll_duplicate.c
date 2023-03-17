#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new,*head,*temp,*temp1;

void main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the elements:");
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
    temp=head;
    temp1=temp->next;
    while(temp->next!=NULL)
    {
        if(temp->data==temp1->data)
       {
           temp->next=temp1->next;
           temp1=temp1->next;
       }
       else
        {
            temp=temp->next;
            temp1=temp1->next;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

