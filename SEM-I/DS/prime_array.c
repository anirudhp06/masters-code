//Check array of elements and print only numbers which are prime
#include <stdio.h>
int main()
{
    int n=5,a[n],i,j,flag=0;
    printf("Enter 5 numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0&&a[i]!=1)
        {
            printf("%d is prime number\n",a[i]);
        }
    }
}