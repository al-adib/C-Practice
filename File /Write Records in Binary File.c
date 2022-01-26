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
	
FILE *fp;

char ans;
int i;

/*opening binary file in appending / writing mode*/
fp=fopen("d://sfile.dat","ab");	
if(fp==NULL)
{
printf("File could not open");
exit(0);
}

while(1)
{
printf("\nEnter Student Record\n");
printf("Roll No:");
scanf("%d",&srecord.rollno);
getchar();
printf("Name:");
gets(srecord.name);
/* write a record to binary file */
fwrite(&srecord,sizeof(srecord),1,fp);
printf("\nRecord has been added successfully");

printf("\nAdd more records? press y or n =");
ans=getche();
if(ans=='n' || ans=='N')
break;
}
fclose(fp);
printf("\nProgram ended: C Program To write Student Records in Binary File:");
return 0;
}