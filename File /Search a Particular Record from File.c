/* Write a C program to input a Roll No then 
search the record of this student in a binary file
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

int found=0, roll;


/*open binary file in read mode*/
fptr=fopen("d://sfile.dat","rb");	
if(fptr==NULL)
{
printf("File could not open");
exit(0);
}

printf("\n Enter Roll No of Student to Search Record=");
scanf("%d",&roll);

while((fread(&srecord,sizeof(srecord),1,fptr)==1))
{
	
	if(srecord.rollno == roll)
	{
	found=1;
	printf("\nRecord of Student With RollNo %d is as follows:",roll);
    printf("\n=======================");
	
	printf("\nRoll No:%d",srecord.rollno);
	printf("\nName:%s",srecord.name);
	
	printf("\n=======================");
	
	break;
}
}
if(found==0)
   printf("\n Record Not found in this file!");
fclose(fptr);
return 0;
}