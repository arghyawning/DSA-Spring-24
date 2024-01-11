#include <stdio.h>

#include "student.h"

stud create_student(int i)
{
    stud s;
    printf("Enter the roll number of student %d: ", i);
    scanf("%lld", &s.roll_no);
    printf("Enter the group of student %d: ", i);
    scanf("%d", &s.group);
    printf("\n");
    return s;
}

void print_student(stud s)
{
    printf("Roll number: %lld\n", s.roll_no);
    printf("Group: %d\n", s.group);
    printf("\n");
}

void update_student(stud *s)
{
    printf("Enter the new roll number: ");
    scanf("%lld", &s->roll_no);
    printf("Enter the new group: ");
    scanf("%d", &s->group);
    printf("\n");
}

void print_all_students(stud s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        print_student(s[i]);
    }
    printf("\n");
}