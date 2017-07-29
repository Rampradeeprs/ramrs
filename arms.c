#include<stdio.h>
void main()
{
int n,r,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n/=10;
if(n==n)
{
printf("n is the armstrong number");
}
else
{
printf("n is not a armstrong number");
}
}
