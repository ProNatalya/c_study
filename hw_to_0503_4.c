#include <stdio.h>

int main() {
    char mes[] = "Hello World";
    size_t l = sizeof(mes)/sizeof(char);

    for (int i = 0; i < l; i++)
    {
        printf("%c\n", mes[i]);
    }
    
    return 0;

}