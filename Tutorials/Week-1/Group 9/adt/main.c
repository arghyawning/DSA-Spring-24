//
// Created by Prakul Agrawal on 1/13/24.
//
#include "stdio.h"
#include "stdlib.h"

#include "structure.h"

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student *student_list = (student *)malloc(n * sizeof(student));
    for (int i = 0; i < n; i++)
    {
        student_list[i] = create_student(i + 1);
    }

    int index;
    printf("Enter index of student to print: ");
    scanf("%d", &index);
    print_student(student_list[index - 1]);

    printf("Enter index of student to update: ");
    scanf("%d", &index);
    update_student_group(&student_list[index - 1]);
    print_student(student_list[index - 1]);

    printf("Enter index of student to update: ");
    scanf("%d", &index);
    wrong_update(student_list[index - 1]);
    print_student(student_list[index - 1]);

    print_all_students(student_list, n);
}