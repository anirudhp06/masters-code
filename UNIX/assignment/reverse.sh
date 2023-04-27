echo "Enter number:"
read n
num=$n
sum=0
while [ $n -gt 0 ]
do
	rem=$(($n % 10))
	sum=$(expr $sum \* 10 + $rem)
	n=$(($n / 10))
done
if [[ $sum -eq $num ]]
then
	echo "Palindrome"
else
	echo "Not palindrome"
fi
