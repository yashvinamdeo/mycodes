#include<stdio.h>
int main()
//To find if a number is even or odd
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0) //If n is divisible by 2 then it is even
    {printf("Even");}
    else
    {
        printf("Odd");
    }
    return 0;
}
