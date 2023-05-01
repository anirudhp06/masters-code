#include <stdio.h>
int main()
{
    int flag,i;
    printf("Enter value for i:");
    scanf("%d",&i);
    flag=i;
    if(flag)
        printf("True state i value:%d",flag);
    else
        printf("False state i value:%d",flag);
    return 0;
}