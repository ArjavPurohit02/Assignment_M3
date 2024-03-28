/*Accept 5 names from user at run time.*/


#include <stdio.h>

int main() {
    char names[5][50]; // Array to store 5 names, each with a maximum length of 49 characters (plus null terminator)
    int i;

    // Input 5 names from the user
    printf("\n\n\t Enter 5 names : ");
    for (i = 0; i < 5; i++) {
        printf("\n\n\t Name %d : ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin); // Read a line of text including spaces
    }

    // Display the entered names
    printf("\n\n\t Entered names : ");
    for (i = 0; i < 5; i++) {
    printf("\n\n\t Name %d : %s", i + 1, names[i]);
    }


}
