#include <stdio.h>
# define MAX 10

int rear=-1,front=0,q[MAX];

void insert();
void delete();
void display();

int main()
{
	int i,choice;
	printf("**** WELCOME TO QUEUE PROGRAM ****\n");
	do
	{
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();
			       break;
			case 2:delete();
			       break;
			case 3:display();
			       break;
			case 4:printf("Exiting\n");
			       break;
			default:printf("Invalid Input\n");
				break;
		}
	}while(choice!=4);
	return 0;
}

void insert()
{
	if(rear==MAX-1)
		printf("Queue is full");
	else
	{
		printf("Enter element to be inserted in queue:");
		scanf("%d",&q[++rear]);
		printf("%d inserted into queue",q[rear]);
	}
}

void delete()
{
	if(front>rear)
		printf("Queue is empty");
	else if(front==rear)
	{
		printf("%d deleted from queue \n",q[front]);
		front=0;
		rear=-1;
	}
	else
		printf("%d is deleted from queue \n",q[front++]);
}

void display()
{
	int i;
	if(front>rear)
		printf("Queue is empty");
	else
	{
		for(i=front;i<=rear;i++)
			printf("%d ",q[i]);
		printf("\n");
	}
}
