#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    t = 35; // описание переменной
    if (t > 10)
    {
        printf("www");
        if (t > 20)
            printf("123");
        if (t > 30)
            printf("rrr\n%d", t);
        return 2;
    }
    else {
        printf("ggg");
        return 7;
    }

}
