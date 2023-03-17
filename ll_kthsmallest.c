#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*temp1,*temp2;
void sort()
{
    temp=head;
    temp1=head->next;
    int temp2;
    while(temp!=NULL)
    {
        temp1=temp->next;
        while(temp1!=NULL)
        {
            if(temp->data > temp1->data)
            {
                temp2=temp->data;
                temp->data=temp1->data;
                temp1->data=temp2;
            }
            temp1=temp1->next;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    temp1=head->next;
    printf("\n%d",temp1->data);
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
    sort();
    return 0;

}
