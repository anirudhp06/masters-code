#!/bin/bash
#Program to take distance between 2 cities(in KM) as input and display it as centimeters,Feet,Inches,meters
echo "Enter Distance between 2 Cities(in KM):"
read dist
mts=`expr $dist \* 1000`
cm=`expr $mts \* 100`
ft=`echo "$mts * 3.281" | bc`
inches=`echo "$mts * 39.37"| bc`

echo "$dist km in meters:$mts m."
echo "$dist km in cm:$cm cm."
echo "$dist km in feet:$ft ft."
echo "$dist km in inches:$inches inches."
