#include<stdio.h>
int main()
{
char c;
printf("Enter the character: ");
scanf("%c",&c);

if(c>='A' && c<='Z')
{
printf("It is an uppercase alphabet");
}

else if(c>='a' && c<='z')
{
printf("It is a lowrcase alphabet");
}

else
{
printf("It is a character");
}
return 0;
}

