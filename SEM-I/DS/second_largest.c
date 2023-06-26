//Program to find second largest and second smallest number in array
#include <stdio.h>
int main()
{
    int a[]={50,30,60}/*,70,55}*/,n=3,i,temp,big,small,j;
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted the elements\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    printf("Second largest element of array is:%d\nSecond smallest element of array is:%d",a[n-2],a[1]);
}