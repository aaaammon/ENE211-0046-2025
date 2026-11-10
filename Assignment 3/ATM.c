#include<stdio.h>
#include<string.h>

int login(char *correctPIN){
    char providedPIN[20];
    int attempts = 0;
    while(attempts<3){
        printf("Please provide PIN:\n");
        scanf("%19s",providedPIN);
        if(strcmp(providedPIN,correctPIN)==0){
            printf("Success!\n");
            return 1;//successful login
        }else{
            printf("Incorrect pin. %d attempt(s) remaining.\n",3-attempts);
        }
        attempts++;
    }
    printf("Too many attempts.Access denied!\n");
    return 0;//failure
}

void checkBalance(float balance){
    printf("\nYour current account balance is %.2f\n", balance);
}

void deposit(float *balance,float amount){
    if(amount>0){
        *balance += amount;//amount=amount+balance
        printf("\nConfirmed deposit of %.2f.New account balance is %.2f.\n",amount, *balance);
    }else{
        printf("Invalid deposit amount(only amount greater than 0).\n");
    }
}

void withdraw(float *balance,float amount){
    if(amount>0){
        if(amount<=*balance){
            *balance -= amount;
            printf("\nSuccess withdrawal of %.2f.New account balance is %.2f\n",amount, *balance);
        }else{
            printf("Insufficient funds in your account.Balance is %.2f.\n",*balance);
        }
    }else{
        printf("Invalid withdrawal amount(must be a positive amount).\n");
    }
}

int main(){
    char correctPIN[20]="8008";
    float balance = 2.00;

    if(!login(correctPIN)){
        return 0;
    }

    float amount;
    int menu;
    printf("\nPLEASE INSERT CARD.\n");
    
    do{
        printf("===========\nMENU\n ===========\n");
        printf("1.Balance Inquiry.\n");
        printf("2.Deposit.\n");
        printf("3.Withdraw.\n");
        printf("4.Exit.\n");
        printf("Choose an option from the menu:\n");
        scanf("%d",&menu);

        switch(menu){
            case 1:
            checkBalance(balance);
            break;

            case 2:
            printf("Enter amount you wish to deposit:");
            scanf("%f", &amount);
            deposit(&balance, amount);
            break;

            case 3:
            printf("\nEnter amount you wish to withdraw:");
            scanf("%f", &amount);
            withdraw(&balance, amount);
            break;

            case 4:
            balance = 0.0f;
            memset(correctPIN, 0, sizeof(correctPIN));
            printf("Exiting program.Goodbye.\n");
            break;

            default:
            printf("Invalid option!\n");
        }

    }while(menu != 4);

    return 0;
}
