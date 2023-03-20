clear
if [ $# -eq 0 ]
then
	echo "No arguments passed,exiting program"
	exit
fi
case $1 in
	one)echo -e "\033[1m$1\033[0m";echo "text is in bold face";;
	two)echo -e "\033[7m$1\033[0m";echo "text is in highlighted(reverse video)";;
	three)echo -e "\033[4m$1\033[0m";echo "text is underlined";;
	*)echo "you entered invalid input";;
esac
