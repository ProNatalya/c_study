#include <stdio.h>

int main() {
    char mes[] = "Hello World";
    
    int j = 0;

    while (mes[j] != '\0')
    {
        printf("%c\n", mes[j]);
        j++;
    }
    
    return 0;

}