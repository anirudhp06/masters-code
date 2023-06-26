clear
if [ $# -eq 0 ]
then
	echo "No args passed"
	exit
fi
if [ -d $1 ]
then
	echo "Directory exists"
else
	echo "$1 directory does not exists"
	exit
fi
for i in $(find "$1" -depth)
do
	size=$(stat -c %s "$i")
	if [ $size -ge 200 ]
	then
		echo "$i-" $size "bytes" >> out.txt
	fi
done
count=`wc -l out.txt | cut -d " " -f 1`
echo "$count"
sort -k 2 -n -r out.txt > final.txt
cat final.txt
rm final.txt
rm out.txt
