/*Modular program for sum of square of n integers */
#include<stdio.h>
int sum_square(int n)
 {
  int sum =0,num;
  int i=1;
  while (i<=n)
  {
  printf("Enter the number ");
  scanf("%d",&num);
   sum = sum +(num * num);
   i++;
  }
  return sum;
 }
 int main()
 {
  int n,S;
  printf("Enter the total number n = ");
  scanf("%d",&n);
  S=sum_square(n);
  printf("Sum of square of n numbers = %d",S);
  return 0;
  }
