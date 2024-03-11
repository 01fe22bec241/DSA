 /*Modular program for individual sum of digits in an integer */
 #include<stdio.h>
  int sum(int n)
  {
   int s=0;
   while(n!=0)
   {
    s=s+n%10;
    n=n/10;
   }
   return s;
  }
 int main()
 {
 int n,s;
 printf("Enter the number ");
 scanf("%d",&n);
 s=sum(n);
 printf("Sum of the digits = %d",s);
 return 0;
 }

