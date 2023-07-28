# function to check if a number is positive or negative
read number from users; num
is_positive() {
let num = 1
	if [num < 0]; then
		echo "number num is negative"
	else
		echo "number num is positive"
}
