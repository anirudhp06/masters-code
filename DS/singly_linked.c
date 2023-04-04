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
	return ((struct node *)malloc(sizeof(struct node *)));
}

NODE insert_front(int item,NODE first)
{
	NODE temp;
	temp=getnode();
	temp->info=item;
	temp->link=first;
	return temp;
}
NODE delete_front(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("List is empty\n");
		return first;
	}
	temp=first;
	temp=temp->link;
	printf("%d deleted from list",first->info);
	free(first);
	return temp;
}
void display(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=first;
		while(temp!=NULL)
		{
			printf("%d->",temp->info);
			temp=temp->link;
		}
		printf("NULL\n");
	}
}

int main()
{
	int ch,item;
	NODE first=NULL;
	printf("Linked List\n");
	do
	{
		printf("\n1.Insert\n");
		printf("\n2.Delete\n");
		printf("\n3.Display\n");
		printf("\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter item:");
			       scanf("%d",&item);
			       first=insert_front(item,first);
			       break;
			case 2:first=delete_front(first);
			       break;
			case 3:display(first);
			       break;
			case 4:printf("\nExiting\n");
			       break;
			default:printf("Invalid Choice\n");
				break;
		}
	}while(ch!=4);
	return 0;
}
