#include <stdio.h>

int main()
{
    int a[] = {1, 3, 6};
    
    printf("%d\n", a[0]);
    printf("%d\n", *a);
    printf("%d\n", *(a + 1));

    
    return 0;
}