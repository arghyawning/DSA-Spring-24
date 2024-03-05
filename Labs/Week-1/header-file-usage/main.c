#include <stdio.h>

#include "student.h"

int main()
{
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("\n");

    stud s[n];
    for (i = 0; i < n; i++)
        s[i] = create_student(i + 1);

    while (1)
    {
        printf("Enter 1 to print details of a student\n");
        printf("Enter 2 to update details of a student\n");
        printf("Enter 3 to print details of all students\n");
        printf("Enter 4 to exit\n");
        int choice;
        scanf("%d", &choice);
        printf("\n");
        
        switch (choice)
        {
        case 1:
            printf("Enter the student index: ");
            scanf("%d", &i);
            print_student(s[i - 1]);
            break;

        case 2:
            printf("Enter the student index: ");
            scanf("%d", &i);
            update_student(&s[i - 1]);
            break;

        case 3:
            print_all_students(s, n);
            break;
        
        case 4:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}