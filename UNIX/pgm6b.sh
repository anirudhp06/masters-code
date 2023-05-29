#Shell script to create function mkcd()
#mkcd() whenever called should create directories recursively
clear
mkcd()
{
	if [ $# -eq 1 ]
	then
		oldifs=$IFS
		IFS="/"
		#Initializing IFS to "/" is mandatory even if u dont use for loop method.
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
			#Instead of this tiring loop we can just create directories
			#Using single command mkdir.
			#To recreate directories recursively use
			#mkdir -p $1
			#After above command give cd $1
			#You will get same output
		done
		IFS=$oldifs
		echo "Present Working directory is $PWD"
	else
		echo "Invalid args passed or no args passed"
		echo "pass directory name as arguments"
	fi
}
