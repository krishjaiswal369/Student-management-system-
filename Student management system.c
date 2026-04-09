#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENTS 1000
struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};
struct Student students[MAX_STUDENTS];
int count = 0;

// Function to add a student

void addStudent() {
    if (count == MAX_STUDENTS) {
        printf("Student limit reached!\n");
        return;
    }   
    printf("Enter Roll Number: ");
    scanf("%d", &students[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]s", students[count].name);
    printf("Enter Age: ");
    scanf("%d", &students[count].age);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;
    printf("Student added successfully!\n");
}
// Function to display all students
void displayStudents() {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }
    printf("\n---- Student List ----\n");
    for (int i = 0; i < count; i++) {
        printf("Roll: %d | Name: %s | Age: %d | Marks: %.2f\n",
               students[i].roll, students[i].name, students[i].age, students[i].marks);
    }
}

// Function to search student by roll number

void searchStudent() {
    int roll;
    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Student Found!\n");
            printf("Roll: %d | Name: %s | Age: %d | Marks: %.2f\n",
                   students[i].roll, students[i].name, students[i].age, students[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}

// Function to update a student

void updateStudent() {
    int roll;
    printf("Enter Roll Number to Update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Enter New Name: ");
            scanf(" %[^\n]s", students[i].name);

            printf("Enter New Age: ");
            scanf("%d", &students[i].age);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("Student updated successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}

// Function to delete a student

void deleteStudent() {
    int roll;
    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("Student deleted successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}
int main() {
    int choice;

    while (1) {
        printf("\n--- Student Management System ---\n\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
