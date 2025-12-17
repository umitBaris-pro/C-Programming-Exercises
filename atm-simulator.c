# include <stdio.h>
int main(){
	int choice;
    float balance = 1000.0;
    float amount;
	do{
	    printf("\n--- ATM MENU ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("New Balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
			case 2:
				printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
			    if(amount>0 && amount<=balance){
			    	balance-=amount;
			    	printf("New Balance: %.2f\n", balance);
				}else if (amount > balance) {
                    printf("Error: Insufficient funds!\n");
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;
            case 4:
			    printf("Exiting... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
		}
		
	}while(choice!=4);
		
	return 0;
}
