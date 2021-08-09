#include<stdio.h>
#include<math.h>

int main()
{
	float deg, rad;
	const float PI=3.14159562;
	
	printf("Enter value of angle in degree\n");
	scanf("%f",&deg);
	
	rad= deg*PI/180.0;
	
	printf("Trignometric Ratios      Values\n");
	printf("sin(%0.01f)              %0.02f\n",deg, sin(rad));
	printf("tan(%0.01f)              %0.02f\n",deg, tan(rad));
	printf("cos(%0.01f)              %0.02f\n",deg, cos(rad));
	printf("sec(%0.01f)              %0.02f\n",deg, 1/cos(rad));
	printf("cosec(%0.01f)            %0.02f\n",deg, 1/sin(rad));
	printf("cot(%0.01f)              %0.02f\n",deg, 1/tan(rad));
	
	return 0;
}