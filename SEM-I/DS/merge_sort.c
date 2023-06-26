#include <stdio.h>

void merge_sort(int [],int,int);
void sort(int [],int,int,int);

int main()
{
    int a[20],n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
    printf("\nElements in sorted order are:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

void merge_sort(int a[20],int low,int high)
{
    int mid=(low+high)/2;
    if(low<high)
    {
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        sort(a,low,mid,high);
    }
}

void sort(int a[20],int low,int mid,int high)
{
    int i=low,j=mid+1,k=low,c[20];
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while (j<=high)
    {
        c[k]=a[j];
        k++;
        j++;
    }
    for ( i = 0; i < k; i++)
    {
        a[i]=c[i];
    }
}