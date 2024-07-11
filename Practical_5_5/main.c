#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 100
/*Write a C program that takes two strings from the user (first name and last name)
and concatenates them with a space between them to display the full name.
STEPS:
• Include the necessary header files (string.h).
• Declare character arrays to store the first name, last name, and full name.
• Prompt the user to input the full name.
• Use an input function to read the string.
• Use inbuilt string functions to copy the first name and last name from the full
name.
• Concatenate the first name, a space, and the last name using sprintf() or strcat().
• Print the full name.*/

char name[length];
char surname[length];
char fullname[200];
int main()
{
    printf("What is you name: ");
    fgets(name, length, stdin);
    printf("What is you surname: ");
    fgets(surname, length, stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
    }
    len = strlen(surname);
    if (len > 0 && surname[len - 1] == '\n') {
        surname[len - 1] = '\0';
    }
    sprintf(fullname, "%s %s", name, surname);
    printf("\nTherefore your fullname is %s", fullname);
    return 0;

}
