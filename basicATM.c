#include <stdio.h>

int main(){
    float balance=17002;
    float moneydeposit;
    float moneywithdraw;
    int option=-1;
    while(option != 0){
        printf("1- View current balance\n");
        printf("2- Deposit money\n");
        printf("3- Withdraw money\n");
        printf("0- Exit\n");
        printf("Please select an option: ");
        scanf("%d",&option);
        switch (option){
            case 1:
            printf("Your current account balance: %f $ \n",balance);
            break;

        case 2:
        printf("Enter the amount you want to deposit: \n");
        scanf("%f",&moneydeposit);
        balance +=moneydeposit;
        printf("Your current account balance: %f $ \n",balance);
        break;

        case 3:
        printf("Enter the amount you want to withdraw: \n");
        scanf("%f",&moneywithdraw);
        if(moneywithdraw>balance){
            printf("Your transaction could not be completed because you wanted to withdraw more money than your account balance..\n");
        }
        else{
            balance -=moneywithdraw;
            printf("Withdrawal successful.Your current account balance: %f $ \n",balance);
        }
        break;

        case 0:
        break;

        default:
            printf("Please select one of the options shown on the screen.\n");
            break;
    }
}
    return 0;
}