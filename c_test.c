#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    int count = 0;
    for (i=0; i<=497; i++)
    {
        if (i % 2 == 0 && i % 14 == 0)
        {
            printf("%i\n", i);
            count +=1; // count++;
            sum += i;
        }

    }    
    printf("sum - %d\n", sum);
    printf("count - %d\n", count);
    printf("-> %.3f\n", ((float)sum)/count);




}