#include<stdio.h>
int main()
{
 int a,b;
 printf("read the values of a and b before swapping");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("a=%d\n b=%d\n",a,b);
 return 0;
}
