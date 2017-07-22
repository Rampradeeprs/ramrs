#include<stdio.h>
#include<conio.h>
void main()
{
char c,Lowercase,Uppercase;
printf("enter the character");
scanf("%s",c)
Is Lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
Is Uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(Uppercase||Lowercase==0)
{
printf("the character is vowel");
}
else
{
printf("the character is consonant");
}
}
