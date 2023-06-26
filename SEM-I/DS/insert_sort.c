#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <omp.h>

void insert_sort(int *a,int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[++j]=temp;
	}
}

int main()
{
	int *a,i,n;
	long s,us;
	double mtime;
	struct timeval start,end;
	printf("Enter number of elements:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		a[i]=rand()%1000;
		printf("%d ",a[i]);
	}
	gettimeofday(&start,0);
	insert_sort(a,n);
	gettimeofday(&end,0);
	s=end.tv_sec-start.tv_sec;
	us=end.tv_usec-start.tv_usec;
	mtime=((s*1000)+(us/1000))+0.5;
	printf("\nTotal time taken:%lfms\n",mtime);
	return 0;
}
