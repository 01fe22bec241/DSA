/*Program for fibonacci series */
#include<stdio.h>[
 void display (int n)
 {
  int f_p_term =0,s_p_term =1;
  int cnt=3,C_term;
  printf("%3d%3d",f_p_term,s_p_term);
  while(cnt<=n)
  {
   C_term = f_p_term +s_p_term;
   printf("%3d",C_term);
   f_p_term = s_p_term;
   s_p_term = C_term;
   cnt++;
  }
  return;
 }
 int main()
 {
  int n;
  printf("Enter the n value ");
  scanf("%d",&n);
  display(n);
  return 0;
 }
