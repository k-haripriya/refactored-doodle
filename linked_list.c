#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert_beg(struct node *head)
{
    struct node *n,*temp;
    n=(struct node*)malloc(sizeof(struct node));
    int val;
    scanf("%d",&val);
    n->data=val;
    n->next=head;
    head=n;
    temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }


}

void insert_middle(struct node *head)
{
    int pos,val;
    struct node *temp=head,*n;
    printf("Enter the position of the new node:\n");
    scanf("%d",&pos);
    n=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&val);
    n->data=val;
    n->next=NULL;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }



}
void insert_end(struct node *head)
{
   struct node *temp=head,*n;
   n=(struct node*)malloc(sizeof(struct node));
   int val;
   scanf("%d",&val);
   n->data=val;
   n->next=NULL;
   while(temp->next!=NULL)
   {
       temp=temp->next;
   }
   temp->next=n;
   temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void del_front(struct node *head)
{
   struct node *temp=head;
   head=head->next;
   temp->next=NULL;
   free(temp);
   temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void del_middle(struct node *head)
{
    int pos;
    struct node *temp=head,*temp1=head;
    printf("Enter the position of the node to be deleted\n");
    scanf("%d",&pos);
    for(int i=1;i<pos-1;i++)
    {
       temp=temp->next;
    }
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void del_end(struct node *head)
{
    struct node *temp=head,*temp1=head;
    while(temp->next!=NULL)
    {
       temp1=temp;
       temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    struct node *new,*head,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=10;
    new->next=NULL;
    head=new;
    temp=head;

    new=(struct node*)malloc(sizeof(struct node));
    new->data=20;
    new->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;


    new=(struct node*)malloc(sizeof(struct node));
    new->data=30;
    new->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;


    printf("1.Insert at beginning\n 2.Insert at middle\n 3.Insert at end\n 4.Deletion at front\n 5.Deletion at middle\n 6.Deletion at end.\n 7.Display\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                insert_beg(head);
                break;
        case 2:
                insert_middle(head);
                break;
        case 3:
                insert_end(head);
                break;
        case 4:
                del_front(head);
                break;
        case 5:
                del_middle(head);
                break;
        case 6:
                del_end(head);
                break;
        case 7:
                display(head);
                break;
    }

}
