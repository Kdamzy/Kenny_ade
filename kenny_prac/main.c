#include <stdio.h>
#include "record.h"
/**
 * main - Entry point of the Student Record.
 *
 * Return: Always returns 0 on success
 */ 
int main()
{
    struct Student students[MAX_STUDENTS];
    int num_students = 0;
    
    int choice;
    
    do
    {
        printf("\nStudent Record System Menu:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Calculate Average Score\n");
        printf("4. Find Highest Scorer\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                add_student(students, &num_students);
                break;
            case 2:
                display_students(students, num_students);
                break;
            case 3:
                printf("Average Score: %.2f\n", calculate_average(students, num_students));
                break;
            case 4:
                find_highest_scorer(students, num_students);
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);
    
    return (0);
}