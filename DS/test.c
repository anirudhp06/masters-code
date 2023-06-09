#include <stdio.h>
#include <stdlib.h>

struct student{
	char USN[30],name[40];
	double m1,m2,m3,avg;
};
typedef struct student stud;


double sort(stud s1)
{
	int i,j;
	double temp;
	double list[]={s1.m1,s1.m2,s1.m3};
	for(i=0;i<3;i++)
	{
		for(j=0;j<i-1;j++)
		{
			temp=list[j];
			list[j]=list[j+1];
			list[j+1]=temp;
		}
	}
	printf("Two better marks are:%lf,%lf\n",list[1],list[2]);
	return list[2]+list[1];
}	

int main()
{
	int i;
	stud s1[10];
	printf("Student program\n");
	for(i=0;i<3;i++)
	{
		printf("Enter %d Student USN:",i+1);
		scanf("%s",s1[i].USN);
		printf("Enter %d Student Name:",i+1);
		scanf("%s",s1[i].name);
		printf("Enter marks for subject 1:");
		scanf("%lf",&s1[i].m1);
		printf("Enter marks for subject 2:");
		scanf("%lf",&s1[i].m2);
		printf("Enter marks for subject 3:");
		scanf("%lf",&s1[i].m3);
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		printf("USN:%s\n",s1[i].USN);
		printf("NAME:%s\n",s1[i].name);
		printf("Subject 1:%lf\n",s1[i].m1);
		printf("Subject 2:%lf\n",s1[i].m2);
		printf("Subject 3:%lf\n",s1[i].m3);
		printf("Avg of 2 subject:%lf\n",sort(s1[i])/2);
	}
	return 0;
}
