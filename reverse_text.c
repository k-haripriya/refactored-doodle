#include<stdio.h>
#include<stdlib.h>
struct node
{
    char *arr;
    struct node *next;
}*new,*head,*temp,*temp1;
void create(char *w)
{
    new=(struct node*)malloc(sizeof(struct node));
    new->arr=w;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        temp=new;
    }
    else
    {
        new->next=temp;
        temp=new;
        head=new;

    }

}
/*void pop()
{

    while(head->next!=NULL)
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        printf("%s ",temp->arr);
        temp1->next=NULL;
    }
    printf("%s ",head->arr);

}*/
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%s ",temp->arr);
        temp=temp->next;
    }
}

int main()
{
    char *words,*w;
  char str[]="Technical Interview Preparation";
  words=strtok(str," ");
  do
  {
    w=words;
    create(w);

  }while((words=strtok(NULL," "))!=NULL);
  display();
  //pop();

}
