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
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &rawmarks);

        if(rawmarks > 100 || rawmarks < 0){
            printf("Please try again! Must be within 0 to 100.\n");
            continue;
        }else if(rawmarks >= 70 && rawmarks <= 100){
            grade = 'A';
        }else if(rawmarks >= 60 && rawmarks < 70){
            grade = 'B';
        }else if(rawmarks >= 50 && rawmarks < 60){
            grade = 'C';
        }else if(rawmarks >= 40 && rawmarks < 50){
            grade = 'D';
        }else{
            grade = 'F';
        }

        printf("====STUDENT INFORMATION====\n");
        printf("Registration No: %d\n", regNO);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", rawmarks);
        printf("Grade: %c\n", grade);

        if(rawmarks >= 40){
            printf("Passed!\n");
        }else {
            printf("Failed!\n");
        }
        i++;
    }




    return 0;
}
