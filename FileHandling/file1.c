// In  this program I am writing a demo file code
// how we can create a file using c language
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("file1.txt","w");// this line is used for creating file
	return 0;
}