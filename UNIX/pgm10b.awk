BEGIN{
	FS="/";
}
{
	printf("The entered date is:%d/%d/%d\n",$1,$2,$3);
	if($1>=1 && $1<=31 && $2>=1 && $2<=12)
	{
		printf("%d/%d/%d is valid date\n",$1,$2,$3);
	}
	else
	{
		printf("%d/%d/%d is invalid date\n",$1,$2,$3);
		exit;
	}
	if($2==1)
		mon="JAN";
	else if($2==2)
		mon="FEB";
	else if($2==3)
		mon="MAR";
	else if($2==4)
		mon="APR";
	else if($2==5)
		mon="MAY";
	else if($2==6)
		mon="JUN";
	else if($2==7)
		mon="JUL";
	else if($2==8)
		mon="AUG";
	else if($2==9)
		mon="SEPT";
	else if($2==10)
		mon="OCT";
	else if($2==11)
		mon="NOV";
	else
		mon="DEC";
	printf("The date in given format is %s/%d/%d\n",mon,$1,$3);
}
