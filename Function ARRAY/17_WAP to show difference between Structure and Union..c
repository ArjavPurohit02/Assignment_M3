/*WAP to show difference between Structure and Union.*/


#include <stdio.h>
#include <string.h>

// Define a structure
struct Employee {
    int empId;
    char empName[50];
    float salary;
};

// Define a union
union Data {
    int num;
    float decimal;
    char letter;
};

 main() {
    struct Employee emp;
    union Data data;

    // Size comparison
    printf("Size of Structure: %lu bytes\n", sizeof(struct Employee));
    printf("Size of Union: %lu bytes\n", sizeof(union Data));

    // Accessing members
    emp.empId = 1001;
    strcpy(emp.empName, "John Doe");
    emp.salary = 50000.0;

    data.num = 10;
    printf("Data as integer: %d\n", data.num);

    data.decimal = 25.5;
    printf("Data as float: %.2f\n", data.decimal);

    data.letter = 'A';
    printf("Data as character: %c\n", data.letter);

}

