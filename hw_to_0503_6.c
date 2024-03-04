#include <stdio.h>

int main() {
    int num[4] = {1, 2, 3, 4};

    num[0] = num[0]*2;
    num[3] = num[3]*2;

    for (int i = 0; i < 4; i++){
        printf("%d\n", num[i]);
    }
    return 0;

}