#include<stdio.h>
int main()
//Program to find greatest of three numbers
{
int a,b,c; //Enter the three numbers
printf("Enter the first number: ");
scanf("%d",&a);

printf("Enter the second number: ");
scanf("%d",&b);

printf("Enter the third number: ");
scanf("%d",&c);

if(a>b && a>c)
{
printf("The first number is greatest");
}

else if(b>a && b>c)
{
printf("The second number is greatest");
}

else
{
printf("The third number is greatest");
}

return 0;
}
