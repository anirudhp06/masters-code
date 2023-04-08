clear
if [ $# -lt 2 ]
then
	echo "Not enough arguments passed"
	exit
fi
for word in `cat $1`
do
	for fil in $*
	do
		if [ "$fil" != "$1" ]
		then
			count=`grep -iow "$word" $fil | wc -w`
			echo "$word is repeated $count time in $fil file"
		fi
	done
done
