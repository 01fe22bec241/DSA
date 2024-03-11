/* Types of triangle */
#include<stdio.h>
int main()
{
  float side1,side2,side3;
  printf("Enter the sides of triangle\n");
  scanf("%f%f%f",&side1,&side2,&side3);
  if((side1==side2)&&(side2==side3))
   printf("The triangle is equilateral");
  else if((side1==side2)&&(side1!=side3))
   printf("The triangle is isosceles");
  else
   printf("the triangle is scalene or right angle triangle");
  return 0;
}
