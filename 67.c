#include<stdio.h>
main()
{
int num,t,n,i,nt,st;
printf("Enter the total number of user :");
scanf("%d",&n);
printf("Enter the number of teaching staff :");
scanf("%d",&t);
if(n>0 && t>0 && n>t+t/3){
nt=t/3;
st=n-(t+nt);
printf("Student users : %d",st);
}
else{
printf("Invalid input");
}
}
