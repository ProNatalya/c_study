#include <stdio.h>

int main()
{
    int b = 13;
    int *p;

    p = &b;

    printf("%p\n", p);
    printf("%d\n", *p);

    
    return 0;
}