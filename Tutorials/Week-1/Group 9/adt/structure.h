//
// Created by Prakul Agrawal on 1/13/24.
//

#ifndef DSA_TAS_SPRING_24_STRUCTURE_H
#define DSA_TAS_SPRING_24_STRUCTURE_H

typedef struct student
{
    char name[30];
    long long int roll_no;
    int group;
} student;

student create_student(int);

void print_student(student);

void update_student_group(student *);

void wrong_update(student);

void print_all_students(student *, int);

#endif //DSA_TAS_SPRING_24_STRUCTURE_H
