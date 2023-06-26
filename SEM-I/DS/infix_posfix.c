#include <string.h>
#include <stdio.h>

int Far(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':return 2;
    
    case '*':
    case '/':return 4;

    case '^':
    case '$':return 5;

    case '(':return 0;

    case '#':return -1;

    default:return 8;
    }
}

int Ghar(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':return 1;
    
    case '*':
    case '/':return 3;

    case '^':
    case '$':return 6;

    case '(':return 9;
    
    case ')':return 0;
    
    default:return 7;
    }
}

void infix_posfix(char infix[],char postfix[])
{
    int top,j,i;
    char s[30],symbol;
    top=-1;
    s[++top]='#';
    j=0;
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        while(Far(s[top])>Ghar(symbol))
        {
            postfix[j]=s[top--];
            j++;
        }
        if(Far(s[top])!=Ghar(symbol))
            s[++top]=symbol;
        else
            top--;
    }
    while (s[top]!='#')
    {
        postfix[j++]=s[top--];
    }
    postfix[j]='\0';
}
int main()
{
    char str[30],postfix[30];
    scanf("%s",str);
    infix_posfix(str,postfix);
    printf("Postfix of %s is %s\n",str,postfix);
    return 0;
}