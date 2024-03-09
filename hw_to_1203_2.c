#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;
    *p = 15;
    
    printf("%d\n", a);
    
    return 0;
}