//C Program to calculate GCD and LCM using recursion.
#include <stdio.h>
int gcd(int,int);
int main()
{
    int a,b,gc,lcm,temp;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    gc=gcd(a,b);
    lcm=(a*b)/gc;
    printf("The GCD is:%d\nThe LCM is:%d\n",gc,lcm);
    return 0;
}
int gcd(int a,int b)
{
    if(b==0) 
    {return a;}
    return gcd(b,a%b);
}
