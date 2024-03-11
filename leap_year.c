#include<stdio.h>
int main()
{
    int year;
    printf("enter any year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("Leap year");
        }
        else
        {
        printf("Not a leap year");
        }
    }
    else
    {

        if(year%4==0)
        printf("leap year");
         else
             {
                 printf("Not a leap year");
             }

    return 0;
}
}
