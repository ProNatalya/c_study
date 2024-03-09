#include <stdio.h>

int main()
{
    int a[] = {1, 3, 6};
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(a + i));

    }

    printf("-----------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    
    return 0;
}