 /* modular program for GCD and LCM */
 #include<stdio.h>
 void GCD_LCM(int a,int b)
 {int rem;
  int n1 = a;
  int n2=b;
  int gcd,lcm;
   do {
   rem = a%b;
   a=b;
   b=rem;
  } while(rem!=0);
  gcd = a;
  lcm = (n1*n2)/gcd;
  printf("GCD = %d\n",gcd);
  printf("lcm = %d\n",lcm);
  }
  int main()
  { int a,b;
    printf("Enter the two numbers \n");
    scanf("%d%d",&a,&b);
    GCD_LCM(a,b);
    return 0;
}
