# function to wish him birthday in a unique way 

check_name() {

local name=$1

	if [ "$name" = "Solomon" ]; then

		echo
                 
		echo "HAPPY BIRTHDAY to the most amazing boyfriend in the whole world!"

		echo

		echo "You make me feel so cherished and loved"

		echo

		echo "I'm so lucky to have you as my bestfriend, gist partner and husband to be"

		echo

		echo "May this special day be filled with happiness and may all your dreams and wishes come true." 

		echo 

		echo "I love you more than words can express. i look forward to celebrating your next birthday together"

	else

		echo "It's not your birthday"

	fi

}

# Read the name from user
echo

echo "Welcome, Star boy! please Enter your name:"

echo

read -p "enter name:" input_name
check_name "$input_name"

