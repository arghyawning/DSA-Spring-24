//
// Created by Prakul Agrawal on 1/13/24.
//
#include "stdio.h"

#include "structure.h"

student create_student(int index)
{
    student s;
    printf("Enter the name of student %d: ", index);
    scanf("%s", s.name);
    printf("Enter the roll number of student %d: ", index);
    scanf("%lld", &s.roll_no);
    printf("Enter the group of student %d: ", index);
    scanf("%d", &s.group);
    printf("\n");
    return s;
}

void print_student(student s)
{
    printf("Name: %s\n", s.name);
    printf("Roll number: %lld\n", s.roll_no);
    printf("Group: %d\n", s.group);
    printf("\n");
}

void update_student_group(student *s)
{
    printf("Enter the new group: ");
    scanf("%d", &s->group);
    printf("\n");
}

void wrong_update(student s)
{
    printf("Enter the new group: ");
    scanf("%d", &s.group);
    printf("\n");
}

void print_all_students(student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        print_student(s[i]);
    }
    printf("\n");
}