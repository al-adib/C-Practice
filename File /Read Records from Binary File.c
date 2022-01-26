/* Write a C program to read a binary file
and show all records on screen
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
int rollno;
char name[30];
}srecord;


int main()
{
FILE *fptr;

char ans;
int i;

/*open binary file in read mode*/
fptr=fopen("d://sfile.dat","rb");	
if(fptr==NULL)
{
printf("File could not open");
exit(0);
}

printf("\nRecords in Student File are:");
printf("\n=======================");
i=1;
while((fread(&srecord,sizeof(srecord),1,fptr)==1))
{
	
	printf("\nRecord No:%d",i);
	printf("\n------------------");
	printf("\nRoll No:%d",srecord.rollno);
	printf("\nName:%s",srecord.name);
	i++;
	printf("\n=======================");
}
fclose(fptr);

}