/*Accept marks from user and check pass or fail*/


#include <stdio.h>

main()
 		{
    float marks;

    // Input marks
    printf("\n\n\t Enter marks : ");
    scanf("%f", &marks);

    // Check if the student has passed or failed
    if (marks >= 40) {
        printf("\n\n\t Pass");
    } else {
        printf("\n\n\t Fail");
    }

 }
