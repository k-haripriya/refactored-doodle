#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new,*front,*rear,*temp;
void enqueue()
{
    printf("Enter the data:\n");
   new=(struct node *)malloc(sizeof(struct node));
   scanf("%d",&new->data);
   new->next=NULL;
   if(front==NULL)
   {
       front =new;
       rear=new;
   }
   else
   {
       rear->next=new;
       rear=new;
   }
}
void dequeue()
{
    printf("%d deleted",front->data);
    temp=front;
    front=front->next;
    temp->next=NULL;
    free(temp);
}
void display()
{
    temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void peak()
{
    printf("The peak element is %d",front->data);
}
int main()
{
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Peak\n");
    int ch=1,choice;
    while(ch!=0)
    {
        scanf("%d",&choice);
        switch(choice)
        {

            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            case 4:peak();
                    break;
            case 5:exit(0);
        }
        printf("\nDo you want to continue?");
        scanf("%d",&ch);
    }
}
