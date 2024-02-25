#include <stdio.h>

int main() {
    int num, result;
    result = 1;
    scanf("%d", &num);
    if (num < 0) {
        printf("Факториала для %d не существует.\n", num);
    } 
    else {
        for (int i = 1; i <= num; i++) {
            result *= i;

        }
    printf("Факториал %d равен %d\n", num, result);
    }
    return 0;

}