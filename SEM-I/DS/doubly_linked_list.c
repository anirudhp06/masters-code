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
    NODE temp,curr;
    
    temp=getnode();
    temp->info=item;
    
    curr=head->rlink;
    
    head->rlink=temp;
    temp->llink=head;
    
    temp->rlink=curr;
    curr->llink=temp;
    
    
    return head;
}

NODE insert_rear(int item,NODE head)
{
    NODE temp,prev=NULL;
    temp=getnode();
    temp->info=item;
    prev=head->llink;
    prev->rlink=temp;
    temp->llink=prev;
    temp->rlink=head;
    head->llink=temp;
    return head;
}

NODE delete_pos(int pos,NODE head)
{
    NODE prev=NULL,curr,next;
    int i;
    if(head->rlink==head)
    {
        printf("Doubly Linked List is empty\n");
        return head;
    }
    curr=head->rlink;
    if(pos==1)
    {
        head->rlink=curr->rlink;
        prev=curr->rlink;
        prev->llink=head;
        printf("%d deleted\n",curr->info);
        free(curr);
        return head;   
    }
    for(i=1;i<pos && curr!=head;i++)
    {
        prev=curr;
        curr=curr->rlink;
    }
    if(curr==head)
    {
        printf("Invalid position\n");
        return head;
    }
    next=curr->rlink;
    prev->rlink=curr->rlink;
    next->llink=prev;
    printf("%d deleted\n",curr->info);
    free(curr);
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
    int ch=0,item,pos;
    NODE head;
    head=getnode();
    head->rlink=head;
    head->llink=head;
    printf("Doubly linked list program:\n");
    do
    {
        printf("Enter your choice:\n");
        printf("1.Insert front\n");
        printf("2.Insert rear\n");
        printf("3.Delete at position\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter item:");
            scanf("%d",&item);
            head=insert_front(item,head);
            break;
        case 2:
            printf("Enter item:");
            scanf("%d",&item);
            head=insert_rear(item,head);
            break;
        case 3:
            printf("Enter position:");
            scanf("%d",&pos);
            head=delete_pos(pos,head);
            break;
        case 4:
            display(head);
            break;
        case 5:
            printf("Exiting\n");
            break;
        
        default:
            printf("Enter valid choice\n");
            break;
        }
    }while(ch!=5);
    return 0;
}