//Program will allocate infinite memory.
#include <stdio.h>
#include <stdlib.h>
void create(int*);
int main()
{
	int *n;
	int ch;
	printf("Say your command i will allocate memory:");
	scanf("%d",&ch);
	if(ch==1)
		while (1)
		{
			create(n);
		}
		
	return 0;
}

void create(int *n)
{
	n=(int*) malloc(1*sizeof(int));
}
