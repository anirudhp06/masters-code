#include <stdio.h>
int binarysearch(int [],int,int,int);
int main()
{
    int num[20],size,key,i,flag=-1;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter elements in ascending order:\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&key);
    flag=binarysearch(num,0,size,key);
    if(flag==0)
        printf("Element found.");
    else
        printf("Element not found.");
    return 0;
}
int binarysearch(int arr[],int low,int high,int key)
{
    int mid;
    mid=(low+high)/2;
    if(low>high) return -1;
    else if (arr[mid]==key) return 0;
    else if (key>arr[mid]) return binarysearch(arr,mid+1,high,key);
    else if(key<arr[mid]) return binarysearch(arr,low,mid-1,key);
}