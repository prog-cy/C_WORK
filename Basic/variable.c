#include<stdio.h>

// In this program I am going to demonstrate what variable is in 'C' and how to define 
/*
	Sytax for defining varaible in 'C'

	data_type variable_name =  value;
*/

int main(){

	int var1 = 20; //This variable has data type integer and name of the variable is "var1" and contains value "20"
	
	printf("var1 = %d\n", var1);	

	float var2 = 20.34; //"var2" is a variable having data type float and contains value "20.34"

	printf("var2 = %f\n", var2);

	char var3 = 'A'; // "var3" is a variable having data type char and contains value 'A'

	printf("var3 = %c\n", var3);

	return 0;
}