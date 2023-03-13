//C program to find sum of products purchased by buyer in shop.
//The program has to be implemented using structures.
#include <stdio.h>

struct product
{
    int prod_no;
    char prod_name[50];
    float mrp;
};

struct user
{
    int slno,qty;
    char user_name[50];
};

int main()
{
    typedef struct user u;
    typedef struct product p;
    p p1[10];
    u u1[10];
    int n,i;
    float total=0,grand_total=0;
    printf("How many products purchased?:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\n********BILL********\n");
        printf("Enter user-name:");
        scanf("%s",u1[i].user_name);
        printf("Enter Product Number:");
        scanf("%d",&p1[i].prod_no);
        printf("Enter Product Name:");
        scanf("%s",p1[i].prod_name);
        printf("Enter MRP:");
        scanf("%f",&p1[i].mrp);
        printf("Enter Quantity:");
        scanf("%d",&u1[i].qty);
        total=p1[i].mrp*u1[i].qty;
        grand_total+=total;
    }
    printf("Grand total:%f\n",grand_total);
    return 0;
}