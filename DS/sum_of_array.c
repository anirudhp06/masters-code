//Sum of Even & Odd Numbers in array.
#include <stdio.h>
int main()
{
	int a[10],n,i,j,eve_max=0,odd_max=0;
	printf("Enter Number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			eve_max+=a[i];
		else
			odd_max+=a[i];
	}
	printf("Sum of even numbers are:%d\n",eve_max);
	printf("Sum of Odd Numbers are:%d\n",odd_max);
	return 0;
}
