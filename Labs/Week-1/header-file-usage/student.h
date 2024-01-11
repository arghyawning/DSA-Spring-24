#ifndef student_h
#define student_h

typedef struct student_details
{
    long long int roll_no;
    int group;
} stud;

stud create_student(int i);
void print_student(stud s);
void update_student(stud *s);
void print_all_students(stud s[], int n);

#endif