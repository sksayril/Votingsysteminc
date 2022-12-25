#include<stdio.h>
#include<string.h>
int check,bjp=0,app=0,cpi=0,cancelvote=0;
char id[10],pass[10],new_id[10],new_pass[10];
void bjpvote();
void appvote();
void cpivote();
void create();
void login();
void main()
{
create();
login();

}

void create(){
    printf("Enter Username");
    scanf("%s",&id);
    printf("Enter New password");
    scanf("%s",&pass);


}
void login(){
char id_1[10],pass_1[10];
printf("Enter Your id:");
scanf("%s",&id_1);
printf("Enter Your Password");
scanf("%s",&pass_1);
if (strcmp(id_1,id)==0 && strcmp(pass_1,pass)==0)
{
    printf("Welcome");
}
else{
    printf("Invalid id pass");
}
}