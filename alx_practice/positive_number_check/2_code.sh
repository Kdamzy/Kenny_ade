#!/bin/bash
# Step 1: Ask the User to enter a number and store it in a variable "num"

read -p "Welcome Kenny! Please enter a number: " num

#step 2: Create a function called "is_positive" that takes a digit "num"

function is_positive(){
	#step 3: Inside the function, check if the value is greater than 0
	if [ $1 -gt  2 ]; then

        #step 4: If num is greater than zero display a message

	echo "This is a great number, it's above the the minimum!"

        else
	#step 5: If num is not greater than 0, display this message

	
	echo "The number is less than the minimum digit"
        
	fi
}

#step 6: call the function and pass the value of num as an argument
is_positive $num


echo "Kenny, thanks for utilizing my functions, I look forward to seeing you later!"
	
echo "I heard you just made a new hairstyle, good of you Beauty!"

