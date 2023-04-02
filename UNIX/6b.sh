#Shell script to create function mckcd()
#mkcd() whenever called should create directories recursively
clear
mkcd()
{
	if [ $# -eq 1 ]
	then
		oldifs=$IFS
		IFS="/"
		for directory in $*
		do
			if [ -d $directory ]
			then
				cd $directory
			elif [ -f $directory ]
			then
				echo "$directory isnt directory"
			else
				mkdir $directory
				cd $directory
			fi
		done
		IFS=$oldifs
		echo "Present Working directory is $PWD"
	else
		echo "Invalid args passed or no args passed"
		echo "pass directory name as arguments"
	fi
}
