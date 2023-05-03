BEGIN{
	sum=0;
	printf("Name\tMid1\tMid2\tSEE\tTotal\tResult\t\n");
}

{
	sum=$3+$4+$5;
	if($3<13 || $4<13 || $5<25 || sum<50)
		res="FAIL\n";
	else if(sum>=50 && sum<60)
		res="Pass\n";
	else if(sum>=60 && sum<75)
		res="First Class\n";
	else
		res="FCD\n";
	printf("%s\t%d\t%d\t%d\t%d\t%s\n",$1,$3,$4,$5,sum,res);
	a[NR]=$0;
}

END{
	for(i=NR;i>0;i--)
		print a[i];
}
