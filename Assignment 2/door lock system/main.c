#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    const char correctPIN[] = "8008";
    char providedPIN[40];
    int attempts = 3;
    int option;
    int proceed = 1;
    int locked = 3;

    while(attempts > 0){
        printf("%d attempts remaining\n",attempts);
        printf("Enter a 4-digit numerical PIN to unlock the door:\n");
        scanf("%39s", providedPIN);

        size_t len = strlen(providedPIN);

        if(len < 4){
            printf("PIN is too short(must be 4 digits)\n");
        }else if(len > 4){
            printf("PIN is too long(must be 4 digits)\n");
        }
        else if(strcmp(providedPIN, correctPIN) == 0){
            printf("PIN is exactly 4 digits.\n");
            printf("===Device Menu===\n");
            printf("1. Open door.\n");
            printf("2. Change Username.\n");
            printf("3. Change PIN.\n");
            printf("4. Exit.\n");
            printf("Choose an option from the menu: ");

       if(scanf("%d", &option)!= 1){
            option = 0;
       }

        switch(option){
            case 1:
                printf("Access granted. Door unlocked.\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                 printf("Invalid option! Please try again\n");
                 break;
         }
                proceed = 1;
                break;
        }
          else{
            printf("Incorrect PIN!\n");
            }
             locked++;
            attempts--;
        }


    if(attempts<=1 && providedPIN != correctPIN){
        printf("System is locked! Wait for 5 seconds...\n");
        int t;
        for(t=5; t>=1; t--){
            printf("%d...\n",t);
            Sleep(1000);
         }

    printf("Try again now\n");
    }



    return 0;
}
