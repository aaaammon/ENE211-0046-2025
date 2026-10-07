#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[60];
    int length;

    printf("Enter your name: ");
    scanf("%59s", name);

    printf("Your name is %s\n", name);

    length = strlen(name);
    printf("Length of string: %d", length);
    return 0;
}
