#include<stdio.h>
int bj=0,ap=0,noresult=0,totalvote=0,i,choice;
void main(){
    printf("How Many Vote Wat To Count?");
    scanf("%d",&totalvote);
for ( i = 0; i <= totalvote; i++)
{
    printf("\t\nWelcoMe To the Voting Sytem\n");
    printf("Enter 1 To vote For BJP\n");
    printf("Enter 2 to vote For APP\n");
    printf("Enter 3 TO cancle Vote\n");
    scanf("%d",&choice);
    // switch (choice)
    // {
    // case 1:
    //     printf("\n**Thank You**");
    //     bj++;
    //     break;
    // case 2:
    //     printf("\n**Thank You**");
    //     break;
    // case 3:
    // printf("\n**Thank You**");
    // break;
    // default:
    // printf("Invalid Input");
    //     break;
    // }
    
    if (choice==1)
    {
        bj++;
    }
    else if (choice==2)
    {
        ap++;
    }
    else if (choice==3)
    {
        noresult++;
    }
    else{
        printf("Invalid Input");
    }
    
    
    
}
printf("\tResult Of the Vote\n");
printf("Bjp got %d Vote\n",bj);
printf("APP got %d Vote\n",ap);
printf("Cancel Vote%d\n",noresult);
if (bj>ap && bj>noresult)
{
    printf("***BJP Winner***\n");
}
else if (ap>bj && ap>noresult)
{
    printf("***APP Winner***\n");
}
else if (noresult>ap && noresult>bj )
{
    printf("***NO VOTE COUNT");
}
else
{
    printf("Vote Result is Tie");
}


}