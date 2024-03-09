#include <stdio.h>
#include <stdlib.h>


void proc1()
{
    printf("www\n");
    printf("123\n");

}

int main()  // точка входа в программу
{
    printf("Hello world!\n");
    proc1(); // была вызвана наша процедура proc1
    return 0;
}
