//C program to implement Quick sort.
#include <stdio.h>
#include <stdlib.h>

int partition(int a[20],int low,int high){
    int i,j,temp,pivot;
    pivot = a[low];
    i = low + 1;
    j = high;
    while(i <= j){
        while(a[i] <= pivot && i <= high)
            i++;
        while(a[j] > pivot)
            j--;
        if( i <= j ){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
        }
    }
    temp = a[j];
    a[j] = a[low];
    a[low] = temp;

    return j;
}

void quick_sort(int a[20],int low,int high){
    int s;
    if(low <= high){
        s = partition(a,low,high);
        quick_sort(a,low,s-1);
        quick_sort(a,s+1,high);
    }
}

int main(){
    int a[20],n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    printf("\nElements in sorted order are:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}