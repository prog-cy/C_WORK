#include<stdio.h>
#include<string.h>

// use of typedef to make alias name of struct name
typedef struct student
{
	char studentname[30];
	char stu_adm[20];
	unsigned long int ph_no;
	
}stud;

// function and structure 
void display(stud inf)
{
	printf("Student name is: %s\n",inf.studentname);
	printf("Student admission number is: %s\n",inf.stu_adm);
	printf("Student phone number is: %ul\n",inf.ph_no);
}

int main()
{
	stud s1;
	stud *ptr;
	//'->' arrow operator is used when we do not use * sign and (.) seperator
	ptr=&s1;
	strcpy(ptr->studentname, "Rupesh Dubey");
	strcpy(ptr->stu_adm, "19SCSE1010010");
	ptr->ph_no=123244;
	display(s1);
}