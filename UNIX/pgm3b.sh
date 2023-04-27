clear
user=`echo "$HOME" | cut -d "/" -f 2`
ctime=`date | cut -c 12-13`
echo "User is $user"
echo "The current time is:$ctime"
case $ctime in
	[0-1][0-1]|0[2-9])echo "Good morning $user";;
	1[2-6])echo "Good afternoon $user";;
	1[7-9])echo "Good evening $user";;
	*)echo "Invalid time";;
esac
