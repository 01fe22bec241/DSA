/*Modular program for to find all divisor of given number */
 #include<stdio.h>
 void All_divisors (int n)
 {
  int i=2;
  printf("1");
  while(i<=n/2)
  {
   if(n%i==0)
    printf("\t%d",i);
   i++;
  }
  printf ("\t%d",n);
  return;
 }
  int main()
 {
  int n;
  printf("Enter the number ");
  scanf("%d",&n);
  All_divisors(n);
  return 0;
 }


