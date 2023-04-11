#include <stdio.h>

void sort(int[],int);

int main()
{
    int a[10],i,n;
    printf("Enter how many elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    printf("Second smallest element in array is:%d\n",a[1]);
    printf("Second largest element of array is:%d\n",a[n-2]);
    return 0;
}

void sort(int a[],int n)
{
    int i,j,temp;
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
}