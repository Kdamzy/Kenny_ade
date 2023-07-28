#include<stdio.h>

int main()
{
    //Declare variables to store the input and the results
    int num1, num2, multiplication;

    //Ask user to input the first number
    printf("Input the first number");
    scanf("%d", num1);

    //Ask user to input the second number
    printf("Input the second number");
    scanf("%d", num2);

    //Find the product of two numbers
    multiplication = num1 * num2;

    //print out the result
    printf("The product of your numbers is: %d", multiplication);

    return 0;
}
