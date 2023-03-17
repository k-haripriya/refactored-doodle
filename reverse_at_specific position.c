#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*new,*head,*temp,*tail;
void create()
{
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=NULL;
    new->prev=NULL;
    if(head==NULL)
    {
        head=new;
        temp=new;
        tail=new;
    }
    else
    {
        temp->next=new;
        new->prev=temp;
        temp=new;
    }
}
void reverse(int start,int end)
{
    struct node *s,*e;
    int i=1;
    temp=head;
    while(i<=end)
    {
        if(i==start)
        {
            s=temp;
        }
        else if(i==end)
        {
            e=temp;
        }
        temp=temp->next;
        i++;
    }

    while(start<end)
    {
        int a;
        a=s->data;
        s->data=e->data;
        e->data=a;
        s=s->next;
        e=e->prev;
        start++;
        end--;
    }

}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,s,e;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        create();
    }
    printf("Starting position:");
    scanf("%d",&s);
    printf("Ending position:");
    scanf("%d",&e);
    reverse(s,e);
    display();
}
