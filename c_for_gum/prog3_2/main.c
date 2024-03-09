#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    int i;
    printf("input x = ");
    scanf("%f", &x);
    printf("input y = ");
    scanf("%f", &y);

    printf("oper: \n 1 = *\n 2 = +\n 3 = /\n 4 = -\n select code = ");
    scanf("%d", &i);

    if (i == 1)
        printf("%g * %g = %g", x, y, x * y); //  заменяем f на g, для удаления 0 в конце при выводе
    if (i == 2)
        printf("%g * %g = %g", x, y, x + y);
    if (i == 3)
        printf("%g / %g = %g", x, y, x + y);
    if (i == 4)
        printf("%g - %g = %g", x, y, x + y);


    return 0;
}
