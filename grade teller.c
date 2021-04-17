#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf(" ENTER THE MARKS OBTAINED BY THE STUDENT  :- ");
scanf("%d",&n);
if(n<=100 && n>=85)
{
printf("the student is in Grade A");	
}
else if(n<=84 && n>=70)
{
printf("the student is in Grade B");	
}
else if(n<=69 && n>=55)
{
printf("the student is in Grade C");	
}
else if(n<=40)
{
printf("the student is in Grade D");	
}
getch();

}
