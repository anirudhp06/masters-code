#include <stdio.h>
#include <string.h>//for strlen()
#include <math.h>//for pow()
#include <ctype.h>//for isdigit()

double compute(double,double,char);
int main()
{
	double num[30],op1,op2,res;
	int i,top=-1,digit;
	char posfix[30],symbol;
	printf("Enter Postfix Expression:");
	scanf("%s",posfix);
	for(i=0;i<strlen(posfix);i++)
	{
		symbol=posfix[i];
		if(isdigit(symbol))
			num[++top]=symbol-'0';
		else
		{
			op2=num[top--];
			op1=num[top--];
			res=compute(op1,op2,symbol);
			printf("Sending compute(%d,%d,%c)\n",op1,op2,symbol);
			num[++top]=res;
		}
	}
	res=num[top];
	printf("\nThe evaluation of expression is:%lf\n",res);
	return 0;
}
double compute(double op1,double op2,char symbol)
{
	int opp1,opp2;
	switch(symbol)
	{
		case '+':return op1+op2;
		case '-':return op1-op2;
		case '/':return op1/op2;
		case '%':opp1=(int)op1;
			 opp2=(int)op2;//cannot compute mod div without converting to int
			 return opp1%opp2;
		case '$'://For compilation of file using pow() use gcc `filename.c` -lm (-lm includes math.h header file explicitly)
		case '^':return pow(op1,op2);
			 break;
		case '*':return op1*op2;
		default:return -1.00;
	}
}
