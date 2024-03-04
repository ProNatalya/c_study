#include <stdio.h>
int maim() {
    int number[3];

    number[0] = 12;
    number[1] = 3;
    number[2] = 6;

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", number[i]);
    }
    return 0;
}