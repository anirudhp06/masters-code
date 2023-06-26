#include <stdio.h>
int main()
{
	int n=5;
	printf("%d outer\n",n);
	int main()
	{
		int f=6;
		printf("%d inner \n",f);
		//return 0;
	}
	main();
	return 0;
}
