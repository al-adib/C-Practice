/* Write a C program to input a name then 
search the multiple records of this student name in a binary file
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
int rollno;
char name[30];
}srecord;


int main()
{
FILE *fptr;

int found=0;
char sname[30];


/*open binary file in read mode*/
fptr=fopen("d://sfile.dat","rb");	
if(fptr==NULL)
{
printf("File could not open");
exit(0);
}

printf("\n Enter Name of Student to Search Record=");
gets(sname);

while((fread(&srecord,sizeof(srecord),1,fptr)==1))
{
	
	if(strcmp(srecord.name,sname)==0)
	{
	found++;
	printf("\nRecord of Student With Name %s is as follows:",sname);
    printf("\n=======================");
	
	printf("\nRoll No:%d",srecord.rollno);
	printf("\nName:%s",srecord.name);
	
	printf("\n=======================");


}
}
if(found==0)
   printf("\n Record Not found in this file!");
else
   printf("\n Total %d Records found in this file with Name=%s!",found,sname);	
fclose(fptr);
return 0;
}