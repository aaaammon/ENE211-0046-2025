#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=1;
    char name[40];
    int regNO;
    int rawmarks;
    char grade;

    printf("Number of students: ");
    scanf("%d", &n);


    while (i <= n){
        printf("*STUDENT %d*\n", i);

        printf("Enter Registration No: ");
        scanf("%d", &regNO);
        printf("Enter name: ");
        scanf("%s", &name);
        printf("Enter marks: ");
        scanf("%d", &rawmarks);

        if(rawmarks > 100 || rawmarks < 0){
            printf("Please try again! Must be within 0 to 100.\n");
            continue;
        }

        switch (rawmarks/10){
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }
        printf("====STUDENT INFORMATION====\n");
        printf("Registration No: %d\n", regNO);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", rawmarks);
        printf("Grade: %c\n", grade);

        switch (grade){
        case 'F':
            printf("Failed!\n");
            break;
        default:
            printf("Passed!\n");
            break;
        }
        i++;

    }

    return 0;
}
