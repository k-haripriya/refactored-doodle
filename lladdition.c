#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*new,*temp;
struct node1
{
    int data;
    struct node1 *next;
}*head1,*temp1,*new1;
struct node2
{
    int data;
    struct node2 *next;
}*head2,*temp2,*new2;
void main()
{
    int i, n=5;
    printf("Enter the values for the list 1:");
    for(i=0;i<n;i++)
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
    printf("Enter the values for the list 2:");
    for(i=0;i<n;i++)
    {
        new1=(struct node1*)malloc(sizeof(struct node1));
        scanf("%d",&new1->data);
        new1->next=NULL;
        if(head1==NULL)
        {
            head1=new1;
            temp1=new1;
        }
        else
        {
            temp1->next=new1;
            temp1=new1;
        }
    }
    temp=head;
    temp1=head1;
    for(i=0;i<n;i++)
    {

        new2=(struct node2*)malloc(sizeof(struct node2));
        new2->data=temp->data+temp1->data;
        new2->next=NULL;
        if(head2==NULL)
        {
            head2=new2;
            temp2=new2;
        }
        else
        {
            temp2->next=new2;
            temp2=new2;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    temp2=head2;
    while(temp2!=NULL)
    {
        printf("%d ",temp2->data);
        temp2=temp2->next;
    }
}
