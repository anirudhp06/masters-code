#include <stdio.h>
int main()
{
    int a[10],small,big,i,n;
    printf("How many elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    small=a[0];
    big=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
            small=a[i];
        else
            big=a[i];
    }
    printf("Smallest in array is:%d\n",small);
    printf("Largest in array is:%d\n",big);
    return 0;
}