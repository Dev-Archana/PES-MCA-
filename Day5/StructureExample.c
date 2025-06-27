#include <stdio.h>

struct student {
    char name[50];  // Increased size
    char Usn[20];
    int age;
};

int main() {
    struct student s1;

    printf("Enter the name of the student: ");
    scanf("%s", s1.name);  // Use %s for strings

    printf("Enter the USN of the student: ");
    scanf("%s", s1.Usn);

    printf("Enter the age of the student: ");
    scanf("%d", &s1.age);

    printf("\nName of student is: %s\n", s1.name);
    printf("USN of student is: %s\n", s1.Usn);
    printf("Age of student is: %d\n", s1.age);

    return 0;
}
