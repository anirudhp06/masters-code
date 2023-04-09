#include <stdio.h>
#include <stdlib.h>
int rear=-1,front=0,count=0,*q,n;
void insert()
{
	if(count==n)
		printf("Queue is full");
	else
	{
		printf("\nEnter the element:");
		rear=(rear+1)%n;
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
		front=(front+1)%n;
		count--;
	}
}
void display()
{
	int i,f;//Temp variable f to not disturb front value, which caused descripency earlier
	if(count==0)
		printf("Queue is Empty.\n");
	else
	{
		f=front;
		for(i=1;i<=count;i++)
		{
			printf("%d ",q[f]);
			f=(f+1)%n;
		}
		printf("\n");
	}
}

int main()
{
	int ch;
	printf("Enter size of queue:");
	scanf("%d",&n);
	q=(int*)malloc(n*sizeof(int));
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
				   free(q);
			       break;
			default:printf("Invalid Choice\n");
				break;
		}
	}while(ch!=4);
	return 0;
}
