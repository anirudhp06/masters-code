#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node* llink;
    struct node* rlink;
};

typedef struct node *NODE;

NODE getnode()
{
    return (struct node*)malloc(sizeof(struct node));
}

NODE insert(int item,NODE root)
{
    NODE temp,prev=NULL,curr;
    temp=getnode();
    temp->info=item;
    temp->llink=NULL;
    temp->rlink=NULL;
    if(root==NULL)
    {
        printf("%d is now root of tree\n",temp->info);
        return temp;
    }
    curr=root;
    while (curr!=NULL)
    {
        prev=curr;
        if(item<curr->info)
            curr=curr->llink;
        else
            curr=curr->rlink;
    }
    if(item<prev->info)
    {
        printf("%d inserted to left of %d.\n",temp->info,prev->info);
        prev->llink=temp;
    }
    else
    {
        printf("%d inserted to right of %d\n",temp->info,prev->info);
        prev->rlink=temp;
    }
    return root;
}

void display(NODE root,int level)
{
    int i;
    if(root==NULL)
        return;
    display(root->rlink,level+1);
    for(i=0;i<level;i++)
        printf(" ");
    printf("%d\n",root->info);
    display(root->llink,level+1);
}

int main()
{
    int ch=0,item;
    NODE root=NULL;
    printf("Binary tree program:\n");
    do
    {
        printf("Enter your choice:\n");
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("3.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter item:");
            scanf("%d",&item);
            root=insert(item,root);
            break;
        case 2:
            display(root,0);
            break;
        case 3:
            printf("Exiting\n");
            break;
        default:
            printf("Enter valid choice\n");
            break;
        }
    }while(ch!=3);
    return 0;
}