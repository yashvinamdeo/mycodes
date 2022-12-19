//To find the area of circle
#include<stdio.h>

int main()
{
float radius,area;

printf("\nEnter the value of radius:");
scanf("%f",&radius);//Enter the value of radius

area=3.14*radius*radius;//Formula for area of circle
printf("The area of the circle for given radius is %f",area);

return 0;
}
