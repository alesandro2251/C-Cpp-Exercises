//Technische informatik II (Operating systems)
//Subject: Revision – dynamic array Tasks: Create a dynamic array of students
//and print the student with the highest grade.
//   user input for array size
//   dynamically create the array of students (array of struct student)
//   user input for all the data in the array
//   print the student with the highest grade
#include <stdio.h>

struct student {
    int fn; // student No
    float grade; // student’s grade
    char name[20]; // student’s name
};

struct student maxGrade(struct student array[], int n) {
    struct student maxStudent = array[0];

    for (int i = 0; i < n; i++) {
        if (array[i].grade > maxStudent.grade) {
            maxStudent = array[i];
        }
    }

    return maxStudent;
}

int main() {

    int n;
    char nameMax[20];
    int facMax;
    printf("==== Enter the number of students: \n");
    scanf("%d", &n);

    struct student array[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the fac. number: \n");
        scanf("%d", &array[i].fn);
        printf("Enter the grade: \n");
        scanf("%f", &array[i].grade);
        printf("Enter the name: \n");
        scanf("%s", &array[i].name);
    };
    printf("==== List of students: \n");
    for (int i = 0; i < n; i++) {
        printf("===== Student ID : %d\n", i + 1);
        printf("Student No: %d\n", array[i].fn);
        printf("Name: %s\n", array[i].name);
        printf("Grade: %.2f\n", array[i].grade);
    };

    struct student max = maxGrade(array, n);
    printf("==== Student with highest grade:\nName: %s\nFN: %d\nGrade: %.2f\n", max.name, max.fn, max.grade);


    return 0;
};
