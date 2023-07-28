// function to check if a number is positive or negative
read -p "number from users: " num
function is_positive(){

	if [num < 3]; then
		echo "number num is negative"
	else
		echo "number num is positive"
	fi
	}
is_positive $num
