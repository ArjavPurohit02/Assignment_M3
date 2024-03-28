/*Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include <stdio.h>

 main() {
    int angle1, angle2, angle3;

    // Input angles of the triangle
    printf("\n\n\t Enter the first angle : ");
    scanf("%d", &angle1);

    printf("\n\n\t Enter the second angle : ");
    scanf("%d", &angle2);

    printf("\n\n\t Enter the third angle : ");
    scanf("%d", &angle3);

    // Check if a triangle can be formed
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("\n\n\t Triangle can be formed with the given angles.");
    } else {
        printf("\n\n\t Triangle cannot be formed with the given angles.");
    }

}

