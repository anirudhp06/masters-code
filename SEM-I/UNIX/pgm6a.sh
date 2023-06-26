#Shell Script to create function() to change directories on command.
clear
mycd()
{
	if [ $# -eq 1 ]
	then
		if [ $1 == "-" ]
		then
			echo "Moved to the parent directory of $PWD"
			cd ..
		elif [ -d $1 ]
		then
			cd $1
			echo "Successfully moved, current dir is : $PWD"
		else
			echo "invalid directory/choice passed"
		fi
	else
		echo "Invalid Args passed"
		echo "pass only 1 argument which is directory name"
	fi
}
