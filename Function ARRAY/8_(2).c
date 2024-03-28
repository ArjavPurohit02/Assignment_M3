#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

 main() {
    struct Employee empArray[5]; // Array of 5 employees

    // Input employee information
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &empArray[i].empno);
        printf("Employee Name: ");
        scanf("%s", empArray[i].empname);
        printf("Address: ");
        scanf("%s", empArray[i].address);
        printf("Age: ");
        scanf("%d", &empArray[i].age);
    }

    // Display employee information
    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        displayEmployee(empArray[i]);
        printf("\n");
    }

}

