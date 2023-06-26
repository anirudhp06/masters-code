BEGIN{
	IS="\t";
	total=0;
	printf("Total Number of book sold in each category:\n");
}

{
	book[$1]+=$2;
}

END{
	for(item in book)
	{
		printf("%s:%d\n",item,book[item]);
		total+=book[item];
	}
	printf("Total Books Sold:%d\n",total);
}
