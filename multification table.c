/* For loop to print the multification table of the number */
#include<stdio.h>
 void G_multification(int n)
 { int i;
   for(i=1;i<=10;i++)
   {
    printf("%d * %d = %d\n",n,i,n*i);
   }
  return ;
 }
 int main()
 {
 int n;
 printf("Enter the number ");
 scanf("%d",&n);
 G_multification(n);
 return 0;
 }
