#include <stdio.h>
#define MAX 5

int rear=-1,front=0,count=0,q[MAX];
void insert()
{
	if(count==MAX)
		printf("Queue is full");
	else
	{
		printf("\nEnter the element:");
		rear=(rear+1)%MAX;
		scanf("%d",&q[rear]);
		printf("%d inserted into queue\n",q[rear]);
		count++;
	}
}
void delete()
{
	if(count==0)
		printf("Queue is empty");
	else
	{
		printf("%d deleted from queue.\n",q[front]);
		front=(front+1)%MAX;
		count--;
	}
}
void display()
{
	int i;
	if(count==0)
		printf("Queue is Empty.\n");
	else
	{
		for(i=1;i<=count;i++)
		{
			printf("%d ",q[front]);
			front=(front+1)%MAX;
		}
		printf("\n");
	}
}

int main()
{
	int ch;
	printf("****Circular Queue Program****\n");
	do
	{
		printf("\n1 . Insert\n");
		printf("\n2 . Delete\n");
		printf("\n3 . Display\n");
		printf("\n4 . Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:delete();
			       break;
			case 3:display();
			       break;
			case 4:printf("Exiting\n");
			       break;
			default:printf("Invalid Choice\n");
				break;
		}
	}while(ch!=4);
	return 0;
}
