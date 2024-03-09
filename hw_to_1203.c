#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;

    int y;

    y = *p;

    printf("%d\n", *p);
    printf("%p\n", &a);
    printf("%d\n", y);
    printf("%p\n", p);
    printf("%d\n", a);
    
    return 0;
}