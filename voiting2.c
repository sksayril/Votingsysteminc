#include<stdio.h>
#include<string.h>
int bjp=0,app=0,cpi=0,cancelvote=0,resultbj,resultapp,resultcpi;
char ch;
char id[10],pass[10],new_id[10],new_pass[10],id_1[10],pass_1[10];
void create();
void login();
void voting();
void result();
void login2();
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
printf("Enter Your id:");
scanf("%s",&id_1);
printf("Enter Your Password");
scanf("%s",&pass_1);
if (strcmp(id_1,id)==0 && strcmp(pass_1,pass)==0)
{
    voting();
    
}
else{
    printf("Invalid id pass");
}
}

void voting(){
     printf("\nEnter 1 to bjp");
     printf("\nEnter 2 to app");
     printf("\nEnter 3 To cpi");
     printf("\nEnter 4 To Admin Login For check Result\n");
    scanf("%s",&ch);  
    switch (ch)
    {
    case '1':
       bjp++;
       resultbj=bjp++;
       voting();
        break;
    case '2':
    app++;
    resultapp=app++;
    voting();
    break;
    case '3':
    cpi++;
    resultcpi=cpi++;
    voting();
    break;
    case '4':
    login2();
    break;
    default:
    cancelvote++;
    printf("Thankyou");
    voting();
        break;
    }  
    
    
    }
    void result(){
        printf("Total Vote APP%d\n",resultapp);
        printf("Total Vote BJP%d\n",resultbj);
        printf("Total Vote Cpi%d\n",resultcpi);

    }
    void login2(){
    printf("Enter Your id:");
    scanf("%s",&id_1);
    printf("Enter Your Password");
    scanf("%s",&pass_1);
    if (strcmp(id_1,id)==0 && strcmp(pass_1,pass)==0)
    {
        result();        
    }
    else{
        printf("Access Denied");
    }
    }