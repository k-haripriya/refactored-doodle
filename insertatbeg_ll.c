#include<stdio.h>

struct node
{
    int data;
    struct node *next;
}*head,*temp,*temp1,*temp2;
void insert()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=head;
    head=new;
}
void insert_end()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new->next=NULL;
    temp->next=new;
}
void insert_at_middle()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    int pos;
    scanf("%d",&pos);
    temp=head;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
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


    int choice=1;
    while(choice)
    {
        struct node *new;
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value:");
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
        printf("Enter the choice(0,1) ");
        scanf("%d",&choice);
    }
    /*insert();
    insert_end();*/

    insert_at_middle();
    display();
}
