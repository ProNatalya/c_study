#include <stdio.h>

int main()
{
    int a = 8;
    int *p;

    p = &a;

    printf("%d\n", *p);

    (*p) = 33;
    
    printf("%d\n", *p);

    
    return 0;
}