#multiplication table code
print_multiplication_table() {
  local number=$1
  echo "Welcome Adeyemi, Multiplication table of $number:"
  read -p "please enter a number:" num
  for ((i=1; i<=12; i++)); do
    result=$((num * i))
    echo "$num x $i = $result"
   done
}
# Call the function with the provided number
print_multiplication_table $1
