BEGIN{
	cg=0;
	gpa=0;
	cr=0;
	printf("Calculation of GPA\n");
}
{
	cg+=($3*$4);
	cr+=$4;
}
END{
	printf("END\n");
	printf("GPA of student is:%lf\n",cg/cr);
}
