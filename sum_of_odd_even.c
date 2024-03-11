#include <stdio.h>
 void add(int num)
  {int i=1,odd_sum = 0, even_sum = 0;
 while(i<=num)
     {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
        i++;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);

}
  int main()
{
    int i, num, odd_sum = 0, even_sum = 0;

    printf("Enter the value of num\n");
    scanf("%d", &num);
    add(num);
    return 0;

}
