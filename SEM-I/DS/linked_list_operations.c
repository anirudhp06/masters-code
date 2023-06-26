/*Linked List operations
1.Insert at front.
2.Insert at rear.
3.Insert at position
4.Delete at position.
5.Delete at rear.
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;

NODE getnode()
{
    return (struct node*)malloc(sizeof(struct node*));
}

NODE insert_front(int item,NODE first)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return temp;
}

NODE insert_rear(int item,NODE first)
{
    NODE temp,prev=NULL,curr;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    curr=first;
    while(curr!=NULL)
    {
        prev=curr;
        curr=curr->link;
    }
    prev->link=temp;
    return first;
}

NODE insert_pos(int item,int pos,NODE first)
{
    NODE temp,prev=NULL,curr;
    int i;
    temp=getnode();
    temp->info=item;
    curr=first;
    for(i=1;i<pos && curr!=NULL;i++)
    {
        prev=curr;
        curr=curr->link;
    }
    if(curr!=NULL)
    {
        prev->link=temp;
        temp->link=curr;
        printf("%d inserted at %d positon.",temp->info,pos);
    }
    else
        printf("Invalid Position\n");
    return first;
}

NODE delete_pos(int pos,NODE first)
{
    NODE prev=NULL,curr;
    int i;
    if(first==NULL)
    {
        printf("Linked List is empty\n");
        return first;
    }
    curr=first;
    for(i=1;i<pos && curr!=NULL;i++)
    {
        prev=curr;
        curr=curr->link;
    }
    if(curr!=NULL)
    {
        prev->link=curr->link;
        printf("%d removed\n",curr->info);
        free(curr);
        return first;
    }
    else
        printf("Invalid Position\n");
    return first;
}

NODE delete_rear(NODE first)
{
    NODE prev=NULL,curr;
    if(first==NULL)
    {
        printf("Linked List is Empty\n");
        return first;
    }
    curr=first;
    while(curr->link!=NULL)
    {
        prev=curr;
        curr=curr->link;
    }
    prev->link=NULL;
    printf("%d is deleted\n",curr->info);
    free(curr);
    return first;
}

void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    temp=first;
    while(temp!=NULL)
    {
        printf("%d->",temp->info);
        temp=temp->link;
    }
    printf("NULL\n");
}

int main()
{
    int ch=0,item,pos;
    NODE first=NULL;
    printf("Linked List Program\n");
    do{
        printf("1.Insert Front\n");
        printf("2.Insert Rear\n");
        printf("3.Insert at Position\n");
        printf("4.Delete at position\n");
        printf("5.Delete at rear\n");
        printf("6.Display\n");
        printf("7.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter element to be inserted:");
            scanf("%d",&item);
            first=insert_front(item,first);
            break;
        case 2:
            printf("Enter element to be inserted:");
            scanf("%d",&item);
            first=insert_rear(item,first);
            break;
        case 3:
            printf("Enter position:");
            scanf("%d",&pos);
            printf("Enter element to be inserted:");
            scanf("%d",&item);
            first=insert_pos(item,pos,first);
            break;
        case 4:
            printf("Enter position:");
            scanf("%d",&pos);
            first=delete_pos(pos,first);
            break;
        case 5:
            first=delete_rear(first);
            break;
        case 6:
            display(first);
            break;
        case 7:
            printf("Exiting\n");
            break;
        default:
            printf("Enter valid Choice\n");
            break;
        }
    }while(ch!=7);
    return 0;
}