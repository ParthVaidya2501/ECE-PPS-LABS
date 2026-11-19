
#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
    char result[10];
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%49s", s[i].name);

        printf("Enter Subject 1: ");
        scanf("%f", &s[i].marks1);

        printf("Enter Subject 2: ");
        scanf("%f", &s[i].marks2);

        printf("Enter Subject 3: ");
        scanf("%f", &s[i].marks3);

        s[i].total = s[i].marks1 +
                     s[i].marks2 +
                     s[i].marks3;

        s[i].percentage = s[i].total / 3.0;

        if(s[i].marks1 >= 40 &&
           s[i].marks2 >= 40 &&
           s[i].marks3 >= 40)
        {
            sprintf(s[i].result, "PASS");
        }
        else
        {
            sprintf(s[i].result, "FAIL");
        }
    }

    printf("\n========== STUDENT RESULTS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number: %d", s[i].rollno);
        printf("\nName: %s", s[i].name);

        printf("\nSubject 1: %.2f", s[i].marks1);
        printf("\nSubject 2: %.2f", s[i].marks2);
        printf("\nSubject 3: %.2f", s[i].marks3);

        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].percentage);
        printf("\nResult: %s\n", s[i].result);
    }

    return 0;
}
