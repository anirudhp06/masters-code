clear
if [ $# -eq 0 ]
then
	echo "No arguments passed."
	exit
fi
if [ -e file.txt ]
then
	rm file.txt
fi
for file in $*
do
	if [ -e $file ]
	then
		echo "$file is valid file"
		`echo $file >> "file.txt"`
	else
		echo "$file is invalid file type"
		exit
	fi
done
echo "The given file names in UPPERCASE are as below"
tr "a-z" "A-Z" < file.txt
