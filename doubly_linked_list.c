#include<stdio.h>
#include<stdlib.h>
void create();
void insertf();
void inserte();
void insertm();
void deletef();
void deletee();
void deletem();
void count();
void search();
struct node
{
    struct node* prev;
    int data;
    struct node* next;
}*newnode,*head=NULL,*tail,*temp,*temp1;
int main()
{
    printf("0.create\n1.Insert at front\n2.Insert at end\n3.Insert at given position\n4.Delete at front\n5.Delete at end\n6.Delete at given position\n7.count\n8.search\n9.Display\n10.Exit\n");
    int choice,c=1;
    while(c)
    {
       printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:create();
                    break;
            case 1:insertf();
                    break;
            case 2:inserte();
                    break;
            case 3:insertm();
                    break;
            case 4:deletef();
                    break;
            case 5:deletee();
                    break;
            case 6:deletem();
                    break;
            case 7:count();
                    break;
            case 8:search();
                    break;
            case 9:display();
                    break;

            case 10:c=0;
        }

    }

}
void create()
{
    int n,i;
    printf("\nEnter number of nodes:");
    scanf("%d",&n);

   for(i=0;i<n;i++)
   {

        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->prev=NULL;
        printf("\nEnter the value:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            tail=newnode;
            temp=newnode;
        }

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
void insertf()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    printf("\nEnter the value:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;


}
void inserte()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    printf("\nEnter the value:");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;

}
void insertm()
{
    int p;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    printf("\nEnter the value:");
    scanf("%d",&newnode->data);
    printf("Enter the position:");
    scanf("%d",&p);
    temp=head;
    for(int i=1;i<p-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next->prev=newnode;

}
void deletef()
{
    head=head->next;
    head->prev=NULL;

}
void deletee()
{
    tail=tail->prev;
    tail->next=NULL;

}
void deletem()
{
    int p;
    printf("Enter the position:");
    scanf("%d",&p);
    temp=head;
    temp1=head;
    for(int i=1;i<p-1;i++)
    {
        temp=temp->next;
        temp1=temp->next;


    }
    temp->next=temp1->next;
    temp1=temp->next;
    temp1->prev=temp;

}
void count()
{
    int cnt=0;
    temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    printf("%d",cnt);
}
void search()
{
    int ele,i=1,f=0;
    printf("Enter the element to be searched:");
    scanf("%d",&ele);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==ele)
        {
            f=1;
            printf("Element is found at position %d",i);
            break;
        }
        i++;
        temp=temp->next;

    }
    if(f==0)
    {
        printf("Element not found");
    }
}


