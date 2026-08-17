#include<stdio.h>
struct studentdetails
{
    char name[20];
    int rollno;
    char address[50];
};
void main()
{
  int i,n;
    printf("\nNumber of students :");
    scanf("%d",&n);
  struct studentdetails student[n];

  for(i=0;i<n;i++)
  {
    printf("\nEnter details of student %d :",i+1);
    scanf("%s %d %s",student[i].name,&student[i].rollno,student[i].address);
  }

  printf("\nDetails of students :");
  for(i=0;i<n;i++)
  {
    printf("\n%d : %s \t %d \t %s ",i+1,student[i].name,student[i].rollno,student[i].address);
  }
}
