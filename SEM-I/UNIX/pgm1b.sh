#Sum of digits of Numbers.
echo "Enter 5 Digit Number:"
read num 
num1=$num
while [ $num -gt 0 ]
do
    ext=`expr $num % 10`
    sum=`expr $sum + $ext`
    num=`expr $num / 10`
done
echo "Sum of digit $num1 is $sum"