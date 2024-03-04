#include <stdio.h>

int main() {
    int number[3];

    int k;

    printf("Введите 1 число: ");
    scanf("%d", &k);
    number[0] = k;

    printf("Введите 2 число: ");
    scanf("%d", &k);
    number[1] = k;

    printf("Введите 3 число: ");
    scanf("%d", &k);
    number[2] = k;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", number[i]);
    }
    return 0;

}