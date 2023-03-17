#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*head,*temp;
struct node1
{
    struct node1 *prev;
    int data;
    struct node1 *next;
}*new1,*head1,*temp1;
void main()
{
    int n,count=0;
    printf("Enter the size:\n");
    scanf("%d",&n);
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
    for(int i=0;i<n;i++)
    {
        new1=(struct node1*)malloc(sizeof(struct node1));
        new1->data=temp->data;
        new1->next=NULL;
        new1->prev=NULL;
        if(head1==NULL)
        {
            head1=new;
            temp1=new;
        }
        else
        {
            new1->prev=temp1;
            temp1->next=new1;
            temp1=new1;
        }
        temp=temp->prev;

    }
    temp=head;
    temp1=head1;
    for(int i=0;i<n;i++)
    {
        if(temp->data==temp1->data)
        {
            count++;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    if(count==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }

}
