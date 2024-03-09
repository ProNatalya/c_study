#include <stdio.h>
#include <stdlib.h>


void proc1()
{
    printf("www\n");
    printf("123\n");

}

int ret7(int x)
{

    return x * x;
}


int main()
{
    int t;
    printf("Hello world!\n");
    t = ret7(22);
    printf("t = %d", t);
    return 0;// вызывая, внутри мэйн мы завершаем эту программу
}
