BEGIN{
	n=0;
	rev="";
	printf("AWK program to identify palindromes\n");
}

{
	for(i=length($0);i!=0;i--)
		rev=rev substr($0,i,1);
	if(length($0)>1 && $0==rev)
		n++;
	rev="";
}
END{
	printf("There are %d palindromes\n",n);
}
