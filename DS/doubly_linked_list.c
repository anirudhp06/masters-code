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

NODE insert_front(int item,NODE head)
{
    NODE temp,prev=NULL;
    temp=getnode();
    temp->info=item;
    if(head->rlink==head)
    {
        head->rlink=temp;
        head->llink=temp;
        temp->llink=head;
        temp->rlink=head;
        return head;
    }
    prev=head->llink;
    prev->rlink=temp;
    temp->llink=prev;
    temp->rlink=head;
    head->llink=temp;
    return head;
}

void display(NODE head)
{
    NODE temp=NULL;
    if(head->rlink==head)
    {
        printf("List is empty\n");
        return;
    }
    temp=head->rlink;
    while(temp!=head)
    {
        printf("%d->",temp->info);
        temp=temp->rlink;
    }
    printf("NULL\n");
}

int main()
{
    int ch=0,item;
    NODE head;
    head=getnode();
    head->rlink=head;
    head->llink=head;
    printf("Doubly linked list program:\n");
    do
    {
        printf("Enter your choice:\n");
        printf("1.Insert\n2.Display\n3.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter item:");
            scanf("%d",&item);
            head=insert_front(item,head);
            break;
        case 2:
            display(head);
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