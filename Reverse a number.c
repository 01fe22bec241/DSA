/* Modular program for a reverse a number */
#include<stdio.h>
 int reverse (int n)
 {
  int rev=0,rem;
  while(n!=0)
  {
   rem = n%10;
   rev = rev*10+rem;
   n = n/10;
  }
  return rev;
 }
 int main()
 {
  int n,R;
  printf("Enter the number ");
  scanf("%d",&n);
  R = reverse(n);
  printf("Reverse number = %d",R);
  if (n==R)
  printf("\nThe number is Palindrome");
  else
  printf("\nThe number is not palindrome");
  return 0;
 }

