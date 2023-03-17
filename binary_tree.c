#include<stdio.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *left,*right;
}*new,*root=NULL,*temp=NULL,*temp1=NULL;
int flag=0;
void create(int n)
{

    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    new->left=NULL;
    new->right=NULL;
    if(root==NULL)
    {
        root=new;

        flag=0;
    }
    else
    {
        temp=root;
        temp1=root;
        while(1)
        {

            if(temp->left==NULL)
            {
                temp->left=new;
                break;
            }
            else if(temp->right==NULL)
            {
                temp->right=new;
                break;
            }
            else if(flag==0)
            {
                temp=temp1->left;
                flag=1;
            }
            else
            {
                temp=temp1->right;
                flag=0;
                temp1=temp1->left;
            }
        }
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {

    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    }

}
void postorder(struct node* root)
{
    if(root!=NULL)
    {

    postorder(root->left);
    postorder(root->right);

    printf("%d ",root->data);
    }


}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}

int main()
{
    int n;
    do
    {
        scanf("%d",&n);
        if(n>0)
        {
            create(n);
        }

    }
    while(n>0);
    printf("\n-------preorder-------\n");
    preorder(root);
     printf("\n-------postorder-------\n");
   postorder(root);
    printf("\n-------Inorder-------\n");
   inorder(root);
}
