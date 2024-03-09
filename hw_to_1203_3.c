#include <stdio.h>

int main()
{
    char c = 'a';
    char *p;

    p = &c;
    
    printf("%c\n", c);
    printf("%p\n", &c);
    printf("--------------------\n");
    printf("%p\n", p);
    printf("%c\n", *p);

    
    return 0;
}