#include <stdio.h>
int main()
{
	printf("Hello\n");
	main();//Causes infinite loop of calling recursive function.
	return 0;
}
