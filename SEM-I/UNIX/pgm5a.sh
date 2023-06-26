clear
if [ $# -eq 0 ]
then
	echo "No us Passed in arguments"
	exit
fi
user=`cat /etc/passwd | grep -w ^"$1" | head -1 | cut -d ":" -f 1`
if [ "$user" != "$1" ]
then
	echo "$1 is not valid user"
	exit
fi
while true
do
	uname=`whoami | grep -w ^"$user" | tr -s " " | cut -d " " -f 1 | head -1`
	#I use ubuntu, and it dosent return anything if used only 'who'.
	#whoami in ubuntu returns only username so it actually dosent make sense having the further conditions,
	#but it is useful for those who arent on ubuntu.
	if [ "$uname" == "$user" ]
	then
		echo "Hi user"
		exit
	else
		echo "$user is yet to log in"
		sleep 10
	fi
done
