/*WAP Find out length of string without using inbuilt function*/


#include <stdio.h>

int strLength(char *str)
{
    if (!*str) // check if string is empty
        return 0;

    int length = 1;

    // calculate length of string
    while (*++str)
    {
        length++;
    }

    return length;
}

 main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of string is: %d", strLength(str));

}
