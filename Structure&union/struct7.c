//creating nested structure
#include<stdio.h>
#include<string.h>

int main()
{
	struct address
	{
		unsigned int H_no;
		unsigned char t_add[20]; 
		
	};
	
	struct emp
	{
		char emp_name[20];
		char emp_ph[10];
		struct address a;
	};
	
	struct emp e1;
	
	strcpy(e1.emp_name, "Rupesh");
	strcpy(e1.emp_ph, "6387551030");
	
	e1.a.H_no = 23;
	
	strcpy(e1.a.t_add, "Pure Parsan dubey");
	
	printf("Name= %s  Phone= %s\nHome Number= %d  Town address= %s\n", e1.emp_name, e1.emp_ph, e1.a.H_no, e1.a.t_add);
	
	return 0;
}