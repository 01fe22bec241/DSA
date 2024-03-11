#include<stdio.h>
int isprime(int n)
{
    int i,prime;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;

    }
    return 1;
}
    int main()
    {
        int n,prime;
        printf("enter n");
        scanf("%d",&n);
        prime=isprime(n);
        if(prime==1){
        printf("number is prime");}
        else
       { printf("number is not prime");}
        return 0;

    }
