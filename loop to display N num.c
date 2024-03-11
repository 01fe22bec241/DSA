/* modular program for to display 1 to N */
#include<stdio.h>
 void display(int n)
 {
 int i=1;
 while (i<=n)
 {
  printf("%d ",i);
  i=i+1;
 } //end of while
 return ;
 }
 int main()
 {
 int n;
 printf ("Enter the N value ");
 scanf("%d",&n);
 display(n);
 return 0;
 }
