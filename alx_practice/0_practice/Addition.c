#include <stdio.h>

int main ()
{
    //Declare variables to store the input numbers and the results
    int num1, num2, sum;

    //Ask the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    //Ask the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    //calculate the sum of the two numbers
    sum = num1 + num2;

    //print the result
    printf("The sum of your numbers is:%d\n", sum);
    return 0;
}
