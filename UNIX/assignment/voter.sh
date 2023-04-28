echo "Enter name of person:"
read name
echo "Enter Age:"
read age
case $age in
	1[8-9]|[2-9][0-9])echo "Eligible to vote.";;
	[0-9]|1[0-7])echo "Not eligible to vote";;
	*)echo "Invalid option";;
esac
