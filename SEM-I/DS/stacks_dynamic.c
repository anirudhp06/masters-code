#include<stdio.h>
#include<stdlib.h>
int TOP=-1;

void PUSH(int [],int);
void POP(int [],int);
void DISPLAY(int [],int);

int main()
{
    int *a,i,ch=0,size;
    printf("Enter size of stack:");
    scanf("%d",&size);
    a=(int*) malloc(size*sizeof(int));
    do
    {
        printf("\nEnter TASK TO BE DONE:\n");
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            PUSH(a,size);
            break;
        case 2:
            POP(a,size);
            break;
        case 3:
            DISPLAY(a,size);
            break;
        case 4:
            printf("Exiting program");
            exit(0);
            break;
        
        default:
            printf("Invalid Choice,try again.");
            break;
        }
    } while (ch!=4);
    free(a);
    return 0;    
}

void PUSH(int *a,int size)
{
    if(TOP==size-1)
    {
        printf("STACK FULL CANNOT PUSH ANY OTHER ELEMENT.");
    }
    else
    {
        printf("Enter element to be pushed:");
        scanf("%d",&a[++TOP]);
        printf("%d pushed into Stack",a[TOP]);
    }
}

void POP(int *a,int size)
{
    if(TOP==-1)
    {
        printf("STACK EMPTY CANNOT POP ANYTHING.");
    }
    else
    {
        printf("%d popped from stack.",a[TOP--]);
    }
}

void DISPLAY(int *a,int size)
{
    int i;
    if(TOP==-1)
        printf("Stack empty");
    else
    {
        for(i=TOP;i>-1;i--)
            printf("%d\n",a[i]);
    }    
}