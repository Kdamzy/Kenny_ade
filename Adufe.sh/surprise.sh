# function to wih him birthday in a unique way 
check_name() {
local name=$1
	if [ "$name" = "Solomon" ]; then
		echo "HAPPY BIRTHDAY to the most amazing boyfriend in the whole world! you make me feel so cherished and loved, i'm so lucky to have you as my bestfriend, gist partner and husband to be"
		echo "may this special day be filled with happiness and may all your dreams and wishes come true. i love you more than words can express. i look forward to celebrating your next birthday together"
	else
		echo "it' not your birthday"
	fi
}
# Read the name from user
echo "Welcome star boy enter your name:"
read -p "entered_name:" input_name
check_name "$input_name"

