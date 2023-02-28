//Program to find largest in array
#include <stdio.h>
int main()
{
    int a[]={1,2,3},largest=a[0],i;
    for(i=0;i<3;i++)
    {
        if(largest<a[i])
            largest=a[i];
    }
    printf("Largest in array is:%d\n",largest);
    return 0;
}