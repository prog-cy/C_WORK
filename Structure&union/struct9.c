//passing structure variable to the function
#include<stdio.h>
#include<string.h>

typedef struct emp
{
	char name[20];
	unsigned int dep_id;
}Emp;

void display1(char *s, int t);
void display2(Emp a);
void display3(Emp *p);

int main()
{
	Emp e1 = {"Rupesh", 123};
	
	display1(e1.name, e1.dep_id);
	
	display2(e1);
	
	display3(&e1);
	
	return 0;
	
}

void display1(char *s, int t)
{
	printf("name= %s Department ID= %d\n", s,t);
}

void display2(Emp a)
{
	printf("name= %s Department ID= %d\n", a.name, a.dep_id);
}

void display3(Emp *p)
{
	printf("name= %s Department ID= %d\n", p->name, p->dep_id);
}