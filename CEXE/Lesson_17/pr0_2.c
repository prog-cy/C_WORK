#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printInfo();
void performTask();

struct wdform{
	
	char acno[14]; int amount; char code;
};

struct bank_cust{
	
	char ac[14];
	char name[20];
	int balance;
};

struct bank_cust s[200];
struct wdform form;

int main(void){
	int i;
	
	printf("Enter data of 10 customers\n");
	printf("Account number\tName\tbalance\n");
	
	for(i = 0; i<10; i++){
		scanf("%s%s%d", s[i].ac, s[i].name, &s[i].balance);
	}
	
	printf("\nCustomers name and account number with balance below Rs. 100\n");
	printInfo();
	
	performTask();
	
	return 0;
}

void printInfo(){
	
	for(int i =0; i<10; i++){
		
		if(s[i].balance<100)
			printf("%s\t%s\n", s[i].name, s[i].ac);
	}
}

void performTask(){
	
	printf("Welcome Sir\n");
	printf("Enter your account number:-> ");
	scanf("%s", form.acno);
	
	printf("\nEnter amount:-> ");
	scanf("%d", &form.amount);
	
	fflush(stdin);
	printf("\nEnter 1 for deposit, 0 for withdrawal:-> ");
	scanf("%c", &form.code);
	
	for(int i = 0; i<10; i++){
		
		if(strcmp(s[i].ac, form.acno) == 0){
			
			if(form.code == '1')
				printf("%d deposited in %s account number\n", form.amount, s[i].ac);
				
			if(form.code == '0'){
				
				if(s[i].balance<100)
					printf("The balance is insufficient for the specified withdrawal\n");
				else if(form.amount<=s[i].balance)
					printf("%d withdrawal from %s account\n", form.amount, s[i].ac);
				else
					printf("Your acount balance is less than entered balance\n");
			}
		}
	}
	
}