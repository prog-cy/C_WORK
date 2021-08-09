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
	strcpy(s[0].stufirst_name, "rupesh");
	strcpy(s[0].stulast_name,"Dubey");
	s[0].stu_id=1235;
	s[0].ph_no=63875;
	s[0].stud_year=2;
	
	strcpy(s[1].stufirst_name, "rupesh1");
	strcpy(s[1].stulast_name,"Dubey2");
	s[1].stu_id=1232;
	s[1].ph_no=63875;
	s[1].stud_year=3;
	
	strcpy(s[2].stufirst_name, "rupesh3");
	strcpy(s[2].stulast_name,"Dubey3");
	s[2].stu_id=1234;
	s[2].ph_no=638755;
	s[2].stud_year=4;
	
	strcpy(s[3].stufirst_name, "rupesh4");
	strcpy(s[3].stulast_name,"Dubey4");
	s[3].stu_id=1233;
	s[3].ph_no=638755;
	s[3].stud_year=3;
	
	// printing all information regarding every student
	for (int i=0;i<4;i++)
	{
		printf("Full name of the student is: %s\n",strcat(s[i].stufirst_name, s[i].stulast_name));
		printf("Student id: %d\n",s[i].stu_id);
		printf("Student Phone number: %ul\n",s[i].ph_no);
		printf("Year of batch: %d\n",s[i].stud_year);
	}
	
	return 0;
	
}