#include<stdio.h>
#include<string.h>

struct student
{
	int stu_id;
	char stufirst_name[30];
	char stulast_name[20];
	unsigned long int ph_no;
	unsigned int stud_year;
};

int main()
{
	struct student s[4];
	int i=3;
	// taking value by  the user
	while(i>=0)
	{
		printf("Enter first name\n");
		scanf("%s",s[i].stufirst_name);
		printf("Enter last name\n");
		scanf("%s",s[i].stulast_name);
		printf("Enter student id\n");
		scanf("%d",&s[i].stu_id);
		printf("Enter student phone number\n");
		scanf("%ul",&s[i].ph_no);
		printf("Enter year in which student is studying\n");
		scanf("%u",&s[i].stud_year);
		i--;

	}
	// printing all information regarding every student
	for (int i=3;i>=0;i--)
	{
		printf("Full name of the student is: %s\n",strcat(s[i].stufirst_name, s[i].stulast_name));
		printf("Student id: %d\n",s[i].stu_id);
		printf("Student Phone number: %ul\n",s[i].ph_no);
		printf("Year of batch: %u\n",s[i].stud_year);
	}
	
	return 0;
	
}