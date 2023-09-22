#ifndef RECORD_H
#define RECORD_H

/*Define the maximum number of students*/ 
#define MAX_STUDENTS 100

/*Structure to store student details*/
struct Student
{
    char name[50];
    int reg_number;
    float scores[5];
};

/*Function prototypes*/
void add_student(struct Student students[], int *numStudents);
void display_students(const struct Student students[], int numStudents);
float calculate_average(const struct Student students[], int numStudents);
void find_highest_scorer(const struct Student students[], int numStudents);

#endif
