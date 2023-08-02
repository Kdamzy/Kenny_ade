#Function to check if a number is prime or not
is_prime() {
	local num=$1
	echo "Welcome Adeyemi, check if a number is prime"
	read -p "please enter a number:" num

	for ((i=2; i<=num/2; i++)); do
		if [ $((num % i)) -eq 0 ]; then 
		 	echo "number is not a prime number"
			exit
        fi
    done

    echo "number is a prime number"

}
#call the function to check if the number is prime
is_prime $input number

