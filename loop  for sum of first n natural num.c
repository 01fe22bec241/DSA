/*Modular program for to find sum of first n natural numbers*/
#include<stdio.h>
 int find_sum(int n)
 {
  int sum =0;
  int i=1;
  while (i<=n)
  {
   sum = sum + i;
   i++;
  }
  return sum;
 }
 int main()
 {
  int n,S;
  printf("Enter the n value ");
  scanf("%d",&n);
  S=find_sum(n);
  printf("the sum of first n natural number is = %d",S);
  return 0;
 }
