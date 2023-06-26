clear
echo "Enter File name:"
read f
if [ -e $f ]
then
	echo "$f is valid file"
else
	echo "$f is invalid file"
	exit
fi
info=`ls -l | grep -w "$f" | cut -d " " -f 1`
echo "File type and file permission of $f are:$info"

info=`ls -l | grep -w "$f" | cut -d " " -f 2`
echo "Hard links of $f is:$info"

info=`ls -l | grep -w "$f" | cut -d " " -f 3`
echo "User of $f is:$info"

info=`ls -l | grep -w "$f" | cut -d " " -f 4`
echo "Group of $f is:$info"

info=`ls -l | tr -s " " " " | grep -w "$f" | cut -d " " -f 5`
echo "Size of $f is:$info bytes"

info=`ls -l | tr -s " " " " | grep -w "$f" | cut -d " " -f 6`
echo "Date of last modified of $f:$info"

info=`ls -l | tr -s " " " " | grep -w "$f" | cut -d " " -f 7`
echo "Date of last accessed $f is:$info"
