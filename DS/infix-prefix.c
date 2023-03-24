#include <stdio.h>
#include <string.h>

int F(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':return 1;

		case '*':
		case '/':return 3;

		case '^':
		case '$':return 6;

		case ')':return 0;

		case '#':return -1;

		default:return 8;
	}
}

int G(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':return 2;

		case '*':
		case '/':return 4;

		case '^':
		case '$':return 5;

		case '(':return 0;
		case ')':return 9;

		default:return 7;
	}
}

void infix_prefix(char infix[],char prefix[])
{
	char symbol,s[30];
	int i,j=0,top=-1;
	strrev(infix);
	s[++top]='#';
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		while(F(s[top])>G(symbol))
			prefix[j++]=s[top--];
		if(F(s[top])!=G(symbol))
			s[++top]=symbol;
		else
			top--;
	}
	while (s[top]!='#')
	{
		prefix[j++]=s[top--];
	}
	prefix[j]='\0';
	strrev(prefix);
}

int main()
{
	char infix[30],prefix[30];
	printf("Enter infix expression:");
	scanf("%s",infix);
	infix_prefix(infix,prefix);
	printf("Prefix expression:%s\n",prefix);
	return 0;
}