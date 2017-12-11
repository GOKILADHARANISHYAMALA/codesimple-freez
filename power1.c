# codesimple-freez
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int num,p,out;
 printf("\nEnter the number:");
 scanf("%d",&num);
 printf("\nEnter the power:");
 scanf("%d",&p);
 out=pow(num,p);
 printf("\nThe value of %d power %d is %d",num,p,out);
}
