#include <stdio.h>
int main()
{
    int a[10],i,n,sum_eve=0,sum_odd=0;
    printf("How many elements?:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            sum_eve+=a[i];
        else
            sum_odd+=a[i];
    }
    printf("Sum of Even numbers:%d\n",sum_eve);
    printf("Sum of Odd Numbers:%d\n",sum_odd);
    return 0;
}