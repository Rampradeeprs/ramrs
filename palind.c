#include<stdio.h>
void main()
{
int n,originalinteger,remainder,reversedinteger=0;
printf("enter the number");
scanf("%d",&n);
originalinteger=0;
while(n!=0)
{
remainder=n%10;
reversedinteger=reversedinteger*10+remainder;
n/=10;
}
if(originalinteger==reversedinteger)
{
printf("the number is palindrome");
}
else
{
printf("the number is not a palindrome");
}
}
