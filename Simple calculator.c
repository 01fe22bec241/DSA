/*Program to impliment simple calculator */
#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("1.Add\n2.Sub\n3.Malt\n4.Div\n5.Rem\n");
  int choice,s,n1,n2;

  printf("Enter the choice");
  scanf("%d",&choice);
  printf("Enter the two numbers");
  scanf("%d%d",&n1,&n2);
  switch(choice)
  {
  case 1:s=n1+n2;
         break;
  case 2:s=n1-n2;
         break;
  case 3:s=n1*n2;
         break;
  case 4:s=n1/n2;
         break;
  case 5:s=n1%n2;
         break;
  default:printf("invalid input\n");
 }//End of switch
  printf("The result is\t%d",s);
 return 0;
}
