#!/bin/bash
# Step 1: Ask the User to enter a number and store it in a variable "num"

read -p "Welcome User! Please enter a number: " num

#step 2: Create a function called "is_positive" that takes a digit "num"

function is_positive(){
	#step 3: Inside the function, check if the value is greater than 0
	if [ num > 0 ]; then

        #step 4: If num is greater than zero display a message

	echo "The number is positive"

        else
	#If num is not greater than 0, display this message
	
	echo "The number is not positive"

	fi
}

#call the function and pass the value of num as an argument
is_positive $num
	


