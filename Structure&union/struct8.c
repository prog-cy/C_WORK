//copying the structure values to another structure variable
#include<stdio.h>
#include<string.h>

typedef struct emp
{
	char name[20];
	unsigned int dep_id;
	char ph[11];
	
}Emp;

int main()
{
	Emp e1 = {"Rupesh" , 123, "6387551030"};
	Emp e2, e3;
	
	//copying using piece-meal method
	strcpy(e2.name, e1.name);
	e2.dep_id = e1.dep_id;
	strcpy(e2.ph, e1.ph);
	
	//copying in one shot
	
	e3 = e1;
	
	printf("Name= %s Department Id= %d Phone Number= %s\n", e1.name, e1.dep_id, e1.ph);
	
	printf("Name= %s Department Id= %d Phone Number= %s\n", e2.name, e2.dep_id, e2.ph);
	printf("Name= %s Department Id= %d Phone Number= %s\n", e3.name, e3.dep_id, e3.ph);
	
	return 0;
}