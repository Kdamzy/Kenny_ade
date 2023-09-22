#include <stdio.h>
#include "record.h"

/**
 * add_student - Adds a new student to the student record.
 * @students: Array of student records.
 * @num_students: Pointer to the number of students
 */
void add_student(struct Student students[], int *num_students)
{
    int i;

    if (*num_students < MAX_STUDENTS)
    {
        struct Student new_student;
        printf("Welcome to Skinoayan International College\n");
        printf("Please enter the student name: ");
        scanf("%s", new_student.name);
        printf("Please enter the student registration number: ");
        scanf("%d", &new_student.reg_number); 
        printf("Please enter the scores for 5 subjects: ");
        for (i = 0; i < 5; i++)
        {
            scanf("%f", &new_student.scores[i]);
        }
        students[*num_students] = new_student;
        (*num_students)++;
        printf("You have sucessfully added this student!\n");
    }
    else
    {
        printf("oops, Maximum number of students reached!\n");
    }
}

/**
 * display_students - Displays details of all students.
 * @students: Array of student records.
 * @num_students: Number of students in the array.
 */
void display_students(const struct Student students[], int num_students)
{
    int i, j;

    printf("Student Details:\n");
    for (i = 0; i < num_students; i++)
    {
        printf("Name: %s\n", students[i].name);
        printf("Registration Number: %d\n", students[i].reg_number);
        printf("Scores: ");
        for (j = 0; j < 5; j++)
        {
            printf("%.2f ", students[i].scores[j]);
        }
        printf("\n");
    }
}

/**
 * calculate_average - Calculates the average score
 * of each of the students.
 * @students: Array of student records.
 * @num_students: Number of students in the array.
 * 
 * Return: The calculated average score.
 */
float calculate_average(const struct Student students[], int num_students)
{
    float total = 0.0;
    int count = 0;
    int i, j;

    for (i = 0; i < num_students; i++)
    {
        for (j = 0; j < 5; j++)
        {
            total += students[i].scores[j];
            count++;
        }
    }
    
    if (count == 0)
    {
        return (0.0);
    }
    
    return (total / count);
}

/**
 * find_highest_scorer - Finds and displays the details
 * of the student with the hidhest score.
 * @students: Array of student records.
 * @num_students: Number of students in the array.
 */
void find_highest_scorer(const struct Student students[], int num_students)
{
    float highest_score = -1.0;
    int highest_index = -1;
    int i, j;

    for (i = 0; i < num_students; i++)
    {
        float student_total = 0.0;
        for (j = 0; j < 5; j++) {
            student_total += students[i].scores[j];
        }
        if (student_total > highest_score)
        {
            highest_score = student_total;
            highest_index = i;
        }
    }
    
    if (highest_index != -1)
    {
        printf("Highest Scorer:\n");
        printf("Name: %s\n", students[highest_index].name);
        printf("Registration Number: %d\n", students[highest_index].reg_number);
        printf("Total Score: %.2f\n", highest_score);
    } else
    {
        printf("No students found!\n");
    }
}

