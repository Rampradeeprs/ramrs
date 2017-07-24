#include<stdio.h>
void main()
{
int n,sum=0,r;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n/=10;
}
printf("the armstrong number is");
}


