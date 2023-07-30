#!/bin/bash

#Ask user to input a number

read -p "Hello, Kenny! write any number of your choice and I will give you the multiplication table from 1 to 12: " num

#Function to print multiplication table of a number

print_multiplication_table() {

	#local num=$1

	for (( i = 1; i <= 12; i++)); do

		result=$((num * i))

		echo "$num x $i = $result"

	done

}

#call the function to print the multiplication table
print_multiplication_table $num

echo "That's the end of your multiplicationt table. Do you need something else?"
