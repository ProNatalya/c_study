#include <stdio.h>

int main() {
    int num[2][3] = {{12, 4, 21},{5, 3, 21}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++){  // i = 0 j = 0; i = 0 j = 1; i = 0 j = 2  
             //  i = 1 j = 0 ; i = 1 j = 1; i = 1 j = 2 
            //printf("%d\n", num[i][j]);
            printf("%-.2d ", num[i][j]);
        }
        printf("\n");
    }
    return 0;

}