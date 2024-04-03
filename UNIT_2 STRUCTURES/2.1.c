//2.1Design a structure named student to store data about student which
//contains following data element


#include<stdio.h>
#include<string.h>

struct student{
 int roll_no;
 char name[20];
 char department[20];
 int year_of_joining;
 float score;
};

void main(){

 struct student s[5];

 for(int i=0;i<5;i++){
    printf("\n Enter roll_no:");
    scanf("%d", &s[i].roll_no);

    printf("\nEnter name:");
    scanf("%s", &s[i].name);

    printf("\nEnter department:");
    scanf("%s", &s[i].department);

    printf("\nEnter year of joining:");
    scanf("%d", &s[i].year_of_joining);

    printf("\nEnter score:");
    scanf("%.2f", &s[i].score);

    printf("\nRoll_no of s[%d]: %d",i,s[i].roll_no);
    printf("\nName of s[%d]: %s",i,s[i].name);
    printf("\nDepartment of s[%d]: %s",i,s[i].department);
    printf("\nYear_of_joining of s[%d]: %d",i,s[i].year_of_joining);
    printf("\nScore of s[%d]: %.2f",i,s[i].score);
 }


}
