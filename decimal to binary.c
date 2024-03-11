/* Program for convert decimal to binary */
#include<stdio.h>
 void binary(int n)
 {
  int i=0;
  int rem,bin=0,place=1;
  while(n!=0)
  {
   rem = n%2;
   bin = bin +rem*place;
   place=place*10;
   n=n/2;
   i++;
  }
  printf("%d",bin);
  return;
  }
  int main()
  {
  int n;
  printf("Enter the number ");
  scanf("%d",&n);
  binary(n);
  return 0;
  }
