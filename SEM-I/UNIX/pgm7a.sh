clear
echo "Enter keyword to be searched:"
read key
echo "Enter Source file:"
read src

if [ -e $src ]
then
	echo "$src exists"
else
	echo "$src does not exists"
	exit
fi

count=`grep -iw "$key" $src | wc -l`
echo "$key is repeated $count times in $src"
