#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int roll;
    float marks;
} student;

typedef struct {
    char first_name[100];
    char last_name[100];
} name;

typedef struct {
    int day;
    int month;
    int year;
} dob;

typedef struct {
    name name;
    dob dob;
    int roll;
    float marks;
} student_info;

int main() {
    student s1;
    printf("Enter the name of the student: ");
    fgets(s1.name, 100, stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0'; 

    printf("Enter the roll number of the student: ");
    scanf("%d", &s1.roll);

    printf("Enter the marks of the student: ");
    scanf("%f", &s1.marks);

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    student s2 = {"John", 2, 98.5};
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("Marks: %.2f\n", s2.marks);

    student s3 = {.name = "Alice", .roll = 3, .marks = 99.5};
    printf("Name: %s\n", s3.name);
    printf("Roll: %d\n", s3.roll);
    printf("Marks: %.2f\n", s3.marks);

    student std[100];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        getchar(); 
        printf("Enter the name of the student %d: ", i + 1);
        fgets(std[i].name, 100, stdin);
        std[i].name[strcspn(std[i].name, "\n")] = '\0'; 

        printf("Enter the roll number of the student %d: ", i + 1);
        scanf("%d", &std[i].roll);

        printf("Enter the marks of the student %d: ", i + 1);
        scanf("%f", &std[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", std[i].name);
        printf("Roll: %d\n", std[i].roll);
        printf("Marks: %.2f\n", std[i].marks);
    }

    strcpy(s1.name, "Sakib");
    printf("Updated Name: %s\n", s1.name);

    student *ptr = &s1;
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    student_info s_info;

    getchar(); 
    printf("Enter the first name of the student: ");
    fgets(s_info.name.first_name, 100, stdin);
    s_info.name.first_name[strcspn(s_info.name.first_name, "\n")] = '\0';

    printf("Enter the last name of the student: ");
    fgets(s_info.name.last_name, 100, stdin);
    s_info.name.last_name[strcspn(s_info.name.last_name, "\n")] = '\0'; 

    printf("Enter the day of birth of the student: ");
    scanf("%d", &s_info.dob.day);
    printf("Enter the month of birth of the student: ");
    scanf("%d", &s_info.dob.month);
    printf("Enter the year of birth of the student: ");
    scanf("%d", &s_info.dob.year);
    printf("Enter the roll number of the student: ");
    scanf("%d", &s_info.roll);
    printf("Enter the marks of the student: ");
    scanf("%f", &s_info.marks);

    printf("Name: %s %s\n", s_info.name.first_name, s_info.name.last_name);
    printf("Date of Birth: %02d/%02d/%04d\n", s_info.dob.day, s_info.dob.month, s_info.dob.year);
    printf("Roll: %d\n", s_info.roll);
    printf("Marks: %.2f\n", s_info.marks);

    return 0;
}
