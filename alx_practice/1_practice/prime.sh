#Function to check if a number is prime or not
is_prime() {
	local num=$1
	echo "Welcome Adeyemi, check if a number is prime"
	read -p "please enter a number:" num

	for ((i=2; i*i <=num; i++)); do
		if [ $((num % i)) -eq 0 ]; then 
		 num=0
            break  # No need to check further if it's not prime
        fi
    done

    if [ $num -eq 1 ]; then
        echo "number is a prime number"
    else
        echo "number is not a prime number"
    fi

}
#call the function to check if the number is prime
is_prime $input number

