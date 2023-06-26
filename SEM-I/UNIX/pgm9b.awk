BEGIN{
	count=0;
	printf("Program Started\n");
}

{
	if(text[$0]++==0)
		lines[++count]=$0;
}

END{
	for(i=1;i<=count;i++)
		print lines[i];
}
