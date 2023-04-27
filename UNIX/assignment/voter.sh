echo "Enter name of person:"
read name
case $name in
	"Anirudh" | "Nagendra" | "Sunidhi" | "Anusha")echo "Eligible to vote.";;
	*)echo "Not in voter list";;
esac
