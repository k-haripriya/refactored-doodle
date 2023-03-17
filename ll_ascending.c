#include<stdio.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
}*new,*head,*temp;
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

}
