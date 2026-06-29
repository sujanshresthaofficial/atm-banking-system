#include<stdio.h>
int main()
{
	int choice;
	double balance = 100000;
	double amount;
	
	printf("======== ATM BANKING SYSTEM ========\n");
	
	do {
		printf("\n1. Check Balance");
		printf("\n2. Deposit Money");
		printf("\n3. Withdraw Money");
		printf("\n4. Exit\n");
		
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1: {
				printf("\n====================================");
				printf("\nYour Balance is : Rs %.2lf\n", balance);
				printf("====================================\n");
				break;
			}
			case 2: {
				printf("\nEnter Amount: ");
				scanf("%lf", &amount);
				if(amount > 0) {
					balance += amount;					
					printf("\n====================================");
					printf("\nAmount Deposited Successfully!\n");
					printf("====================================\n");
				}
				else {					
					printf("\n====================================");
					printf("\nError! Invalid Amount!\n");
					printf("====================================\n");
				}
				break;
			}
			case 3: {
				printf("\nEnter Amount: ");
				scanf("%lf", &amount);
				if(amount > 0 && balance >= amount) {
					balance -= amount;					
					printf("\n====================================");
					printf("\nAmount Withdrew Successfully!\n");
					printf("====================================\n");
				}
				else {
					printf("\n====================================");
					printf("\nError! Invalid Amount!\n");
					printf("====================================\n");
				}
				break;
			}
			case 4: {
				printf("\n====================================");
				printf("\nThank you for using ATM, Goodbye!\n");
				printf("====================================\n");
				break;
			}
			default: {
				printf("\n====================================");
				printf("\nInvalid Choice! Try Again\n");
				printf("====================================\n");
				break;
			}
		}
		
	}while(choice !=4);
}