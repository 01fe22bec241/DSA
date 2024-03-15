#include <stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    int b[6]={1,2,3,4,5,6};
    int c[6],i;
    printf("Total matrix sum is\n");
    for(i=0;i<6;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d  ",c[i]);
    }

  return 0;
}

