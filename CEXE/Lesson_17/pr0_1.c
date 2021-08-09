// Write a program using structure to store the data of the students.
#include<stdio.h>
#include<string.h>

void printData(char str[10]);
void printName(int year);

struct student{
	
	char rol_num[10]; 
	char name[20];
	char dept[20];
	char course[10];
	int yoj; // year of joining.
};

struct student s[450]; // In this line we have declared 450 students.

int main(void){
	int i, year;
	
	char str[10];
	
	int ch;
	
	printf("Enter data of 10 student\n");
	
	for(i = 0; i<10; i++){
		
		scanf("%s%s%s%s%d", s[i].rol_num, s[i].name, s[i].dept, s[i].course, &s[i].yoj);
	}
	
	while(1){
		
		printf("\nEnter year to get name of the students: ");
		scanf("%d", &year);
	
		printName(year);
	
		printf("\nEnter roll number to get whole info: ");
		scanf("%s", str);
	
		printData(str);
		
		printf("\nEnter 1 to know about more students and 0 to exit: ");
		scanf("%d", &ch);
		
		if(ch != 1)
			break;

		
	}
	
	return 0;
}

void printName(int year){
	
	int i;
	
	printf("\nName of the students who joined in year %d\n", year);
	for(i = 0; i<10; i++){
		
		if(s[i].yoj == year){
			printf("%s\n", s[i].name);
		}
	}
	
}

void printData(char str[10]){
	
	printf("\nInformation of the student whose Roll number is %s\n", str);
	
	for(int i = 0; i<10; i++){
		
		if(strcmp(s[i].rol_num, str) == 0){
			printf("Name  %s\n", s[i].name);
			printf("Department  %s\n", s[i].dept);
			printf("Course  %s\n", s[i].course);
			printf("Year of joining  %d\n", s[i].yoj);
		}
	}
	
	
}